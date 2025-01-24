#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "hardware/adc.h"
#include "pico/bootrom.h"

//arquivo .pio
#include "pio_matrix.pio.h"

//número de LEDs
#define NUM_PIXELS 25

//pino de saída
#define OUT_PIN 7

//botão de interupção
const uint button_0 = 5;
const uint button_1 = 6;


//Alterei aqui para acender todos
//vetor para criar imagem na matriz de led - 1
double desenho[25] =   {1.0, 1.0, 0.0, 1.0, 1.0,
                        0.0, 1.0, 0.0, 1.0, 0.0, 
                        0.0, 0.0, 0.0, 0.0, 0.0,
                        1.0, 1.0, 1.0, 1.0, 1.0,
                        1.0, 0.0, 0.0, 0.0, 1.0};

//vetor para criar imagem na matriz de led - 2
double desenho2[25] =   {0.0, 0.0, 0.0, 0.0, 0.0,
                        1.0, 1.0, 0.0, 1.0, 1.0, 
                        0.0, 0.0, 0.0, 0.0, 0.0,
                        1.0, 0.0, 0.0, 0.0, 1.0,
                        1.0, 1.0, 1.0, 1.0, 1.0};

//imprimir valor binário
void imprimir_binario(int num) {
 int i;
 for (i = 31; i >= 0; i--) {
  (num & (1 << i)) ? printf("1") : printf("0");
 }
}

//rotina da interrupção
static void gpio_irq_handler(uint gpio, uint32_t events){
    printf("Interrupção ocorreu no pino %d, no evento %d\n", gpio, events);
    printf("HABILITANDO O MODO GRAVAÇÃO");
	reset_usb_boot(0,0); //habilita o modo de gravação do microcontrolador
}

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
void desenho_pio(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){

    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        
            valor_led = matrix_rgb(b=0.0, desenho[24-i], g=0.0);
            pio_sm_put_blocking(pio, sm, valor_led);
    }
    imprimir_binario(valor_led);
}

void desenho_pioVERDE(double *desenho, uint32_t valor_led, PIO pio, uint sm, double r, double g, double b){

    for (int16_t i = 0; i < NUM_PIXELS; i++) {
        
            valor_led = matrix_rgb(b=0.0, r=0.0, desenho[24-i]);
            pio_sm_put_blocking(pio, sm, valor_led);
    }
    imprimir_binario(valor_led);
}

//função principal
int main()
{
    PIO pio = pio0; 
    bool ok;
    uint16_t i;
    uint32_t valor_led;
    double r = 0.0, b = 0.0 , g = 0.0;

    //coloca a frequência de clock para 128 MHz, facilitando a divisão pelo clock
    ok = set_sys_clock_khz(128000, false);

    // Inicializa todos os códigos stdio padrão que estão ligados ao binário.
    stdio_init_all();

    printf("iniciando a transmissão PIO");
    if (ok) printf("clock set to %ld\n", clock_get_hz(clk_sys));

    //configurações da PIO
    uint offset = pio_add_program(pio, &pio_matrix_program);
    uint sm = pio_claim_unused_sm(pio, true);
    pio_matrix_program_init(pio, sm, offset, OUT_PIN);

    //inicializar o botão de interrupção - GPIO5
    gpio_init(button_0);
    gpio_set_dir(button_0, GPIO_IN);
    gpio_pull_up(button_0);

    //inicializar o botão de interrupção - GPIO5
    gpio_init(button_1);
    gpio_set_dir(button_1, GPIO_IN);
    gpio_pull_up(button_1);

    //interrupção da gpio habilitada
    gpio_set_irq_enabled_with_callback(button_0, GPIO_IRQ_EDGE_FALL, 1, & gpio_irq_handler);

    while (true) {
    
    if(gpio_get(button_1)) //botão em nível alto
    {
        //rotina para escrever na matriz de leds com o emprego de PIO - desenho 1 QUADRADO
        desenho_pio(desenho, valor_led, pio, sm, r, g, b);
        sleep_ms(500);
        desenho_pioVERDE(desenho2, valor_led, pio, sm, r, g, b);
        sleep_ms(500);
    }
    else
    {
        //rotina para escrever na matriz de leds com o emprego de PIO - desenho 2 X
        desenho_pio(desenho2, valor_led, pio, sm, r, g, b);
    }

    sleep_ms(500);
    printf("\nfrequeência de clock %ld\r\n", clock_get_hz(clk_sys));
    }
    
}
