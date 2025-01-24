#ifndef TECLA1_frames_H  // Guardas de inclusão
#define TECLA1_frames_H
#include "pico/stdlib.h"
#include "pio_matrix.pio.h"
#define NUM_PIXELS 25

double tecla1_frame1[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             1.0, 0.0, 0.0, 0.0, 1.0}; 

double tecla1_frame2[25] = {1.0, 1.0, 0.0, 1.0, 1.0,
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             1.0, 0.0, 0.0, 0.0, 1.0};

double tecla1_frame3[25] = {1.0, 1.0, 0.0, 1.0, 1.0,
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             1.0, 0.0, 0.0, 0.0, 1.0};

double tecla1_frame4[25] = {1.0, 1.0, 0.0, 1.0, 1.0,
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             1.0, 0.0, 0.0, 0.0, 1.0};

double tecla1_frame5[25] = {1.0, 1.0, 0.0, 1.0, 1.0,
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             1.0, 0.0, 0.0, 0.0, 1.0};

double tecla1_frame6[25] = {1.0, 1.0, 0.0, 1.0, 1.0,
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             1.0, 0.0, 0.0, 0.0, 1.0};

//rotina para definição da intensidade de cores do led
uint32_t matrix_rgb(double b, double r, double g)
{
  unsigned char R, G, B;
  R = r * 255;
  G = g * 255;
  B = b * 255;
  return (G << 24) | (R << 16) | (B << 8);
}

//rotina para acionar a matrix de leds - ws2812b
void tecla_1_desenho(uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){

    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        
            valor_led = matrix_rgb(b=0.0, tecla1_frame1[24-i], g=0.0);
            pio_sm_put_blocking(pio, sm, valor_led);
    }
    sleep_ms(300);
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        
            valor_led = matrix_rgb(b=0.0, tecla1_frame2[24-i], g=0.0);
            pio_sm_put_blocking(pio, sm, valor_led);
    }
    sleep_ms(300);
}
#endif