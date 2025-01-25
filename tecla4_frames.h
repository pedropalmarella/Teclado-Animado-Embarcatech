#ifndef TECLA4_frames_H  // Guardas de inclusão
#define TECLA4_frames_H
#include "pico/stdlib.h"
#include "pio_matrix.pio.h"
#define NUM_PIXELS 25

// Frames para cada cor
// A animação será uma transição de cores em tons de verde e azul
double tecla4_frame1[25] = {0.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 0.0, 0.0, 0.0, 1.0, 
                            0.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 0.0, 0.0, 0.0, 1.0};

double tecla4_frame2[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0}; 

double tecla4_frame3[25] = {0.0, 0.5, 0.0, 0.5, 0.0,
                            0.5, 0.5, 0.5, 0.5, 0.5, 
                            0.5, 0.5, 0.5, 0.5, 0.5,
                            0.0, 0.5, 0.5, 0.5, 0.0,
                            0.0, 0.0, 0.5, 0.0, 0.0};

double tecla4_frame4[25] = {0.0, 0.7, 0.0, 0.7, 0.0,
                            0.7, 0.7, 0.7, 0.7, 0.7, 
                            0.7, 0.7, 0.7, 0.7, 0.7,
                            0.0, 0.7, 0.7, 0.7, 0.0,
                            0.0, 0.0, 0.7, 0.0, 0.0};

double tecla4_frame5[25] = {0.0, 1.0, 0.0, 1.0, 0.0,
                            1.0, 1.0, 1.0, 1.0, 1.0, 
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            0.0, 1.0, 1.0, 1.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

// Função para definir a intensidade das cores do LED
uint32_t intensidade_das_cores(double b, double r, double g)
{
    unsigned char R, G, B;
    R = r * 255;
    G = g * 255;
    B = b * 255;
    return (G << 24) | (R << 16) | (B << 8);
}

// Função para acionar a matriz de LEDs WS2812b
void tecla_4_desenho(uint32_t valor_led, PIO pio, uint sm, double r, double g, double b)
{
    // Exibir o primeiro frame (verde)
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = intensidade_das_cores(0.0, tecla4_frame1[24 - i], 0.0);  
        pio_sm_put_blocking(pio, sm, valor_led);
    }
    sleep_ms(300);

    // Exibir o segundo frame (sem cor)
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = intensidade_das_cores(0.0, tecla4_frame2[24 - i], 0.0);  
        pio_sm_put_blocking(pio, sm, valor_led);
    }
    sleep_ms(300);

    // Exibir o terceiro frame (verde claro)
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = intensidade_das_cores(0.0, tecla4_frame3[24 - i], 0.0);  
        pio_sm_put_blocking(pio, sm, valor_led);
    }
    sleep_ms(300);

    // Exibir o quarto frame (verde mais forte)
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = intensidade_das_cores(0.0, tecla4_frame4[24 - i], 0.0);  
        pio_sm_put_blocking(pio, sm, valor_led);
    }
    sleep_ms(300);

    // Exibir o quinto frame (verde intenso)
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = intensidade_das_cores(0.0, tecla4_frame5[24 - i], 0.0);  
        pio_sm_put_blocking(pio, sm, valor_led);
    }
    sleep_ms(300);
}
#endif
