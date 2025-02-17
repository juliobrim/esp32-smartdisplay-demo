// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 9.1.0
// Project name: SabconIot

#include "../ui.h"

void ui_ScrLogin_screen_init(void)
{
ui_ScrLogin = lv_obj_create(NULL);
lv_obj_remove_flag( ui_ScrLogin, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_ScrLogin, lv_color_hex(0x5D139C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ScrLogin, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_ScrLogin, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_ScrLogin, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_ScrLogin, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_ScrLogin, 20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Container6 = lv_obj_create(ui_ScrLogin);
lv_obj_remove_style_all(ui_Container6);
lv_obj_set_width( ui_Container6, lv_pct(100));
lv_obj_set_height( ui_Container6, lv_pct(80));
lv_obj_set_flex_flow(ui_Container6,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_Container6, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
lv_obj_remove_flag( ui_Container6, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Container3 = lv_obj_create(ui_Container6);
lv_obj_remove_style_all(ui_Container3);
lv_obj_set_width( ui_Container3, lv_pct(100));
lv_obj_set_height( ui_Container3, lv_pct(12));
lv_obj_remove_flag( ui_Container3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label14 = lv_label_create(ui_Container3);
lv_obj_set_width( ui_Label14, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label14, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label14, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label14,"OPERADOR");
lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label14, &ui_font_BarlowBold24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Container2 = lv_obj_create(ui_Container6);
lv_obj_remove_style_all(ui_Container2);
lv_obj_set_width( ui_Container2, lv_pct(80));
lv_obj_set_height( ui_Container2, lv_pct(45));
lv_obj_set_align( ui_Container2, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_Container2,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_Container2, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
lv_obj_remove_flag( ui_Container2, LV_OBJ_FLAG_CLICKABLE );    /// Flags
lv_obj_set_style_pad_row(ui_Container2, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_column(ui_Container2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Panel8 = lv_obj_create(ui_Container2);
lv_obj_set_height( ui_Panel8, 60);
lv_obj_set_width( ui_Panel8, lv_pct(100));
lv_obj_set_align( ui_Panel8, LV_ALIGN_CENTER );
lv_obj_remove_flag( ui_Panel8, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label8 = lv_label_create(ui_Panel8);
lv_obj_set_width( ui_Label8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label8,"Julio Brim");

ui_Panel9 = lv_obj_create(ui_Container2);
lv_obj_set_height( ui_Panel9, 60);
lv_obj_set_width( ui_Panel9, lv_pct(100));
lv_obj_set_align( ui_Panel9, LV_ALIGN_CENTER );
lv_obj_remove_flag( ui_Panel9, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label5 = lv_label_create(ui_Panel9);
lv_obj_set_width( ui_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label5,"Joao Carlos");

ui_Panel10 = lv_obj_create(ui_ScrLogin);
lv_obj_set_width( ui_Panel10, 100);
lv_obj_set_height( ui_Panel10, 100);
lv_obj_set_align( ui_Panel10, LV_ALIGN_BOTTOM_RIGHT );
lv_obj_remove_flag( ui_Panel10, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel10, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Panel10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Panel10, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image3 = lv_image_create(ui_Panel10);
lv_image_set_src(ui_Image3, &ui_img_580822032);
lv_obj_set_width( ui_Image3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image3, LV_OBJ_FLAG_CLICKABLE );   /// Flags
lv_obj_remove_flag( ui_Image3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_image_set_inner_align( ui_Image3, LV_IMAGE_ALIGN_RIGHT_MID );

ui_BtnBackLogin = lv_button_create(ui_ScrLogin);
lv_obj_set_width( ui_BtnBackLogin, 100);
lv_obj_set_height( ui_BtnBackLogin, 50);
lv_obj_set_x( ui_BtnBackLogin, 0 );
lv_obj_set_y( ui_BtnBackLogin, 270 );
lv_obj_set_align( ui_BtnBackLogin, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_BtnBackLogin, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_remove_flag( ui_BtnBackLogin, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label58 = lv_label_create(ui_BtnBackLogin);
lv_obj_set_width( ui_Label58, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label58, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label58, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label58,"Voltar");

lv_obj_add_event_cb(ui_Panel8, ui_event_Panel8, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Panel9, ui_event_Panel9, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Image3, ui_event_Image3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Panel10, ui_event_Panel10, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_BtnBackLogin, ui_event_BtnBackLogin, LV_EVENT_ALL, NULL);

}
