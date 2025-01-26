#ifndef INIT_GPIO_H  // Guardas de inclusão
#define INIT_GPIO_H
#include "pico/stdlib.h"

// Configuração do teclado matricial
#define ROWS 4
#define COLS 4
#define OUT_PIN 10

// Pinos para as linhas e colunas do teclado
const uint linhas[ROWS] = {8, 7, 6, 5};
const uint colunas[COLS] = {4, 3, 2, 1};

// Layout do teclado
const char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};


void init_teclado_btn0() {
    // Configura as linhas como saída e colunas como entrada
    for (int i = 0; i < ROWS; i++) {
        gpio_init(linhas[i]);
        gpio_set_dir(linhas[i], GPIO_OUT);
        gpio_put(linhas[i], true); // Estado padrão
    }
    for (int i = 0; i < COLS; i++) {
        gpio_init(colunas[i]);
        gpio_set_dir(colunas[i], GPIO_IN);
        gpio_pull_up(colunas[i]); // Ativa pull-up
    }
}

char ler_teclado() {
    for (int row = 0; row < ROWS; row++) {
        gpio_put(linhas[row], false); // Ativa a linha

        for (int col = 0; col < COLS; col++) {
            if (!gpio_get(colunas[col])) { // Coluna baixa
                gpio_put(linhas[row], true); // Restaura a linha
                return keys[row][col];
            }
        }

        gpio_put(linhas[row], true); // Restaura a linha
    }
    return '\0'; // Nenhuma tecla pressionada
}

#endif