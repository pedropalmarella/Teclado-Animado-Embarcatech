#ifndef CONFIG_LEDS_H  // Guardas de inclusão
#define CONFIG_LEDS_H

#include "pico/stdlib.h"
#include "pio_matrix.pio.h"

#define NUM_PIXELS 25

uint32_t matrix_rgb(double b, double r, double g)
{
    unsigned char R, G, B;
    R = r * 255;
    G = g * 255;
    B = b * 255;
    return (G << 24) | (R << 16) | (B << 8);
}

// Função para acionar a matriz de LEDs - ws2812b
void setar_leds_todas_cores(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b) {
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(desenho[24-i], desenho[24-i], desenho[24-i]);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para acionar LEDs vermelhos
void setar_leds_vermelho(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b) {
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(b=0.0, desenho[24-i], g=0.0);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para acionar LEDs verdes
void setar_leds_verde(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b) {
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(b=0.0, r=0.0, desenho[24-i]);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para acionar LEDs azuis
void setar_leds_azul(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b) {
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(desenho[24-i], r=0.0, g=0.0);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para acionar LEDs cianos
void setar_leds_ciano(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b) {
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(desenho[24-i], r=0.0, g=desenho[24-i]);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para acionar LEDs roxos
void setar_leds_roxo(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b) {
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(desenho[24-i], desenho[24-i], g=0.0);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para acionar LEDs mistos
void setar_leds_misto(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b) {
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        valor_led = matrix_rgb(b*desenho[24-i], r*desenho[24-i], g*desenho[24-i]);
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para acionar LEDs amarelos
void setar_leds_amarelo(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b) {
    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        // Amarelo é uma mistura de vermelho e verde
        valor_led = matrix_rgb(desenho[24-i], desenho[24-i], 0.0);  // Definindo a cor amarela
        pio_sm_put_blocking(pio, sm, valor_led);
    }
}

// Função para gerar valores aleatórios normalizados
void generate_random_values(double *val1, double *val2, double *val3) {
    // Gera valores aleatórios normalizados
    *val1 = (double)rand() / 1;
    *val2 = (double)rand() / 1;
    *val3 = (double)rand() / 1;
}

#endif  // Fim da guarda de inclusão
