/* Hello_World.ino */
#include "lvgl_port.h"

// ------------------------------------
/* Programa LVGL*/
// ------------------------------------

void example_hello_world(void) {
    // Ejemplo simple: Crear un botón con una etiqueta
    lv_obj_t * btn = lv_btn_create(lv_scr_act());     
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, 0);
    
    lv_obj_t * label = lv_label_create(btn);
    lv_label_set_text(label, "JORGE ALBERTO MARTINEZ SUAREZ!");
    lv_obj_center(label);
}

// ------------------------------------
/* void setup()*/
// ------------------------------------
void setup() {
    Serial.begin(115200);
    
    // Inicializa todo el hardware y LVGL con una sola línea
    setup_lvgl_port();

    // Llama a tu función de interfaz
    example_hello_world();
}
// ------------------------------------
/* Void loop()*/
// ------------------------------------
void loop() {
    // Mantén esto limpio, LVGL gestiona el resto
    lv_timer_handler(); 
    delay(5);
}