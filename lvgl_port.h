/* lvgl_port.h */
#ifndef LVGL_PORT_H
#define LVGL_PORT_H

#include <lvgl.h>
#include <Arduino.h>

// Inicializa pantalla, touch y drivers de LVGL
void setup_lvgl_port();

// Maneja el brillo (0-100)
void set_brightness(uint8_t value);

#endif