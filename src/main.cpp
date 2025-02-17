#include <Arduino.h>

#include <esp32_smartdisplay.h>
#include <ui/ui.h>
#include <lvgl.h>

struct User {
    const char* userID;
    const char* pin;
    const char* name;
};

User users[5] = {
    {"1", "1234", "Alice"},
    {"2", "2222", "Bob"},
    {"3", "3333", "Charlie"},
    {"4", "4444", "David"},
    {"5", "5555", "Eve"}
};

struct Order {
    const char* orderID;
    const char* productName;
    const char* amount;
    const char* dueDate;
};

Order orders[5] = {
    {"0001", "Sofá Couro", "10 pçs", "05/02/2022"},
    {"0002", "Sofá Modular", "20 pçs", "08/02/2022"},
    {"0003", "Sofá Retrátil", "15 pçs", "12/02/2022"},
    {"0004", "Sofá Premium", "1.000 pçs", "17/02/2022"},
    {"0005", "Julio Brim", "1 pçs", "14/10/1988"}
};

const char* verifyUser(const char* userID, const char* pin) {
    for (int i = 0; i < 5; ++i) {
        if (strcmp(users[i].userID, userID) == 0 && strcmp(users[i].pin, pin) == 0) {
            return users[i].name;
        }
    }
    return nullptr;
}

void CheckPassword(lv_event_t * e)
{
    // Your code here
    const char * pin = lv_textarea_get_text(ui_TxtPin);
    const char * userID = lv_label_get_text(ui_LblUserID);

    const char* userName = verifyUser(userID, pin);
    if (userName) {
        lv_label_set_text(ui_LblOperatorName, userName);
        lv_screen_load_anim((lv_obj_t*)ui_ScrMain, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, false);
    } else {
        lv_screen_load_anim((lv_obj_t*)ui_ScrLogin, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, false);
    }
}

void OpenOperationScreen(lv_event_t * e)
{
    // Your code here
    lv_tabview_set_active(ui_TabView1, 2, LV_ANIM_OFF);
    // lv_screen_load_anim((lv_obj_t*)ui_ScrMain, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, false);
}

const int gpioPin17 = 17; // Define the GPIO pin number
const int gpioPin18 = 18; // Define the GPIO pin number



void setup()
{
#ifdef ARDUINO_USB_CDC_ON_BOOT
    delay(5000);
#endif
    Serial.begin(115200);
    Serial.setDebugOutput(true);
    log_i("Board: %s", BOARD_NAME);
    log_i("CPU: %s rev%d, CPU Freq: %d Mhz, %d core(s)", ESP.getChipModel(), ESP.getChipRevision(), getCpuFrequencyMhz(), ESP.getChipCores());
    log_i("Free heap: %d bytes", ESP.getFreeHeap());
    log_i("Free PSRAM: %d bytes", ESP.getPsramSize());
    log_i("SDK version: %s", ESP.getSdkVersion());

    smartdisplay_init();

    __attribute__((unused)) auto disp = lv_disp_get_default();
    // lv_disp_set_rotation(disp, LV_DISP_ROT_90);
    //lv_disp_set_rotation(disp, LV_DISP_ROTATION_180);
    lv_disp_set_rotation(disp, LV_DISP_ROTATION_270);

    ui_init();

    // Configurar o pino GPIO como entrada
    pinMode(gpioPin17, INPUT_PULLUP);
    pinMode(gpioPin18, INPUT_PULLUP);

    // To use third party libraries, enable the define in lv_conf.h: #define LV_USE_QRCODE 1
    
    lv_screen_load_anim((lv_obj_t*)ui_ScrMain, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, false);

    lv_obj_t *ui_PnlOpDisplays[20] = {nullptr};

    for (int i = 0; i < 5; ++i) {
        if (ui_PnlOpDisplays[i] != nullptr) {
            lv_obj_del(ui_PnlOpDisplays[i]);
            Serial.println("deletando");
        }
        ui_PnlOpDisplays[i] = ui_PnlOpDisplay_create(ui_Container1, orders[i].orderID, orders[i].productName, orders[i].amount, orders[i].dueDate);
        
        if (i == 0) {
            lv_obj_add_state( ui_PnlOpDisplays[i], LV_STATE_USER_1 );
        } else
        if (i == 1) {
            lv_obj_add_state( ui_PnlOpDisplays[i], LV_STATE_USER_2 );
        } else
        if (i == 2) {
            lv_obj_add_state( ui_PnlOpDisplays[i], LV_STATE_USER_3 );
        }
    }

    
    
}

ulong next_millis;
auto lv_last_tick = millis();

void loop()
{
    auto const now = millis();
    if (now > next_millis)
    {
        next_millis = now + 500;

        char text_buffer[32];
        sprintf(text_buffer, "%lu", now);
        //lv_label_set_text(uic_lblMillisecondsValue, text_buffer);

#ifdef BOARD_HAS_RGB_LED
        auto const rgb = (now / 2000) % 8;
        smartdisplay_led_set_rgb(rgb & 0x01, rgb & 0x02, rgb & 0x04);
#endif


        // Ler o estado do pino GPIO e publicar no serial
        int gpioStatus = digitalRead(gpioPin17);


        // Definir a cor de fundo do uiLed1 de acordo com o estado do GPIO
        // if (gpioStatus == HIGH) {
        //     lv_obj_set_style_bg_color(ui_uiLed1, lv_color_hex(0x00FF00), LV_PART_MAIN); // Verde
        // } else {
        //     lv_obj_set_style_bg_color(ui_uiLed1, lv_color_hex(0xFF0000), LV_PART_MAIN); // Vermelho
        // }

        int gpio18Status = digitalRead(gpioPin18);
        // if (gpio18Status == HIGH) {
        //     lv_obj_set_style_bg_color(ui_uiLed2, lv_color_hex(0x00FF00), LV_PART_MAIN); // Verde
        // } else {
        //     lv_obj_set_style_bg_color(ui_uiLed2, lv_color_hex(0xFF0000), LV_PART_MAIN); // Vermelho
        // }


    }

    // Update the ticker
    lv_tick_inc(now - lv_last_tick);
    lv_last_tick = now;
    // Update the UI
    lv_timer_handler();
}