// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 9.1.0
// Project name: SabconIot

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_ScrLogin
void ui_ScrLogin_screen_init(void);
lv_obj_t *ui_ScrLogin;
lv_obj_t *ui_Container6;
lv_obj_t *ui_Container3;
lv_obj_t *ui_Label14;
lv_obj_t *ui_Container2;
void ui_event_Panel8( lv_event_t * e);
lv_obj_t *ui_Panel8;
lv_obj_t *ui_Label8;
void ui_event_Panel9( lv_event_t * e);
lv_obj_t *ui_Panel9;
lv_obj_t *ui_Label5;
void ui_event_Panel10( lv_event_t * e);
lv_obj_t *ui_Panel10;
void ui_event_Image3( lv_event_t * e);
lv_obj_t *ui_Image3;
void ui_event_BtnBackLogin( lv_event_t * e);
lv_obj_t *ui_BtnBackLogin;
lv_obj_t *ui_Label58;
// CUSTOM VARIABLES


// SCREEN: ui_ScrMain
void ui_ScrMain_screen_init(void);
lv_obj_t *ui_ScrMain;
lv_obj_t *ui_Header;
lv_obj_t *ui_Container8;
lv_obj_t *ui_Container14;
lv_obj_t *ui_Label3;
lv_obj_t *ui_LblStationName;
lv_obj_t *ui_Container15;
lv_obj_t *ui_Label13;
lv_obj_t *ui_LblOperatorName;
void ui_event_Container7( lv_event_t * e);
lv_obj_t *ui_Container7;
void ui_event_Image2( lv_event_t * e);
lv_obj_t *ui_Image2;
lv_obj_t *ui_Body;
lv_obj_t *ui_TabView1;
lv_obj_t *ui_TabPage1;
lv_obj_t *ui_Container1;
lv_obj_t *ui_Panel7;
lv_obj_t *ui_Label6;
lv_obj_t *ui_PnlOpDisplay;
lv_obj_t *ui_TabPage2;
lv_obj_t *ui_PnlOpDisplay3;
lv_obj_t *ui_Container17;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Image4;
lv_obj_t *ui_Container6;
lv_obj_t *ui_Container2;
lv_obj_t *ui_dataDefaultTimeLabel;
lv_obj_t *ui_dataDefaultTime;
lv_obj_t *ui_dataDefaultTimeUnit;
lv_obj_t *ui_Container3;
lv_obj_t *ui_dataAvarageTimeLabel;
lv_obj_t *ui_dataAvarageTime;
lv_obj_t *ui_dataAvarageTimeUnit;
lv_obj_t *ui_Container4;
lv_obj_t *ui_dataPiecesCountLabel;
lv_obj_t *ui_dataPiecesCount;
lv_obj_t *ui_dataPiecesCountUnit;
lv_obj_t *ui_Container40;
lv_obj_t *ui_dataPiecesRejectedLabel;
lv_obj_t *ui_dataPiecesRejected;
lv_obj_t *ui_dataPiecesRejectedUnit;
lv_obj_t *ui_TabPage3;
lv_obj_t *ui_Footer;
lv_obj_t *ui_Container9;
lv_obj_t *ui_Label4;
// CUSTOM VARIABLES


// SCREEN: ui_ScrPassword
void ui_ScrPassword_screen_init(void);
lv_obj_t *ui_ScrPassword;
lv_obj_t *ui_Container4;
lv_obj_t *ui_Label15;
lv_obj_t *ui_LblOperatorNameLogin;
lv_obj_t *ui_Container5;
lv_obj_t *ui_Label16;
lv_obj_t *ui_TxtPin;
void ui_event_Keyboard1( lv_event_t * e);
lv_obj_t *ui_Keyboard1;
lv_obj_t *ui_LblUserID;
// CUSTOM VARIABLES


// SCREEN: ui_ScrSettings
void ui_ScrSettings_screen_init(void);
lv_obj_t *ui_ScrSettings;
lv_obj_t *ui_Container11;
lv_obj_t *ui_Label10;
lv_obj_t *ui_LblDeviceID;
lv_obj_t *ui_Container10;
lv_obj_t *ui_Label9;
lv_obj_t *ui_LblCompanyName;
lv_obj_t *ui_Container12;
lv_obj_t *ui_Label11;
lv_obj_t *ui_LblWifiSSID;
lv_obj_t *ui_Container13;
lv_obj_t *ui_Label12;
lv_obj_t *ui_Lbl;
void ui_event_Button1( lv_event_t * e);
lv_obj_t *ui_Button1;
lv_obj_t *ui_Label56;
// CUSTOM VARIABLES

// EVENTS
lv_obj_t *ui____initial_actions0;

// IMAGES AND IMAGE SETS

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Panel8( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_label_set_property(ui_LblOperatorNameLogin, _UI_LABEL_PROPERTY_TEXT, "Julio C Brim");
      _ui_label_set_property(ui_LblUserID, _UI_LABEL_PROPERTY_TEXT, "1");
}
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_ScrPassword, LV_SCR_LOAD_ANIM_NONE, 100, 0, &ui_ScrPassword_screen_init);
}
}

void ui_event_Panel9( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_label_set_property(ui_LblOperatorNameLogin, _UI_LABEL_PROPERTY_TEXT, "João Carlos");
      _ui_label_set_property(ui_LblUserID, _UI_LABEL_PROPERTY_TEXT, "2");
}
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_ScrPassword, LV_SCR_LOAD_ANIM_NONE, 100, 0, &ui_ScrPassword_screen_init);
}
}

void ui_event_Panel10( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_ScrSettings, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, &ui_ScrSettings_screen_init);
}
}

void ui_event_Image3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_ScrSettings, LV_SCR_LOAD_ANIM_NONE, 100, 0, &ui_ScrSettings_screen_init);
}
}

void ui_event_BtnBackLogin( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_ScrMain, LV_SCR_LOAD_ANIM_NONE, 100, 0, &ui_ScrMain_screen_init);
}
}

void ui_event_Container7( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_ScrLogin, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_ScrLogin_screen_init);
}
}

void ui_event_Image2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_ScrLogin, LV_SCR_LOAD_ANIM_NONE, 100, 0, &ui_ScrLogin_screen_init);
}
if ( event_code == LV_EVENT_CLICKED) {
      _ui_basic_set_property(ui_BtnBackLogin, _UI_BASIC_PROPERTY_POSITION_X,  0);
      _ui_flag_modify( ui_BtnBackLogin, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
}
}

void ui_event_Keyboard1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_READY) {
      CheckPassword( e );
}
}

void ui_event_Button1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_ScrLogin, LV_SCR_LOAD_ANIM_NONE, 100, 0, &ui_ScrLogin_screen_init);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_display_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_ScrLogin_screen_init();
ui_ScrMain_screen_init();
ui_ScrPassword_screen_init();
ui_ScrSettings_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_ScrLogin);
}
