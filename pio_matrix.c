#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "hardware/adc.h"
#include "pico/bootrom.h"
#include "pio_matrix.pio.h"
#include "tecla1_frames.h"//biblioteca com o desenho da tecla 1 
#include "init_GPIO.h"//biblioteca que inicializa teclado e o botao

//número de LEDs
#define NUM_PIXELS 25
//Debounce (em milissegundos)
#define DEBOUNCE_TIME 300
//pino de saída
#define OUT_PIN 10

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
    //inicializa teclado e btn0, função no arquivo init_GPIO.h
    init_teclado_btn0();

    printf("iniciando a transmissão PIO");
    if (ok) printf("clock set to %ld\n", clock_get_hz(clk_sys));

    //configurações da PIO
    uint offset = pio_add_program(pio, &pio_matrix_program);
    uint sm = pio_claim_unused_sm(pio, true);
    pio_matrix_program_init(pio, sm, offset, OUT_PIN);

    //interrupção da gpio habilitada
    gpio_set_irq_enabled_with_callback(button_0, GPIO_IRQ_EDGE_FALL, 1, & gpio_irq_handler);

    while (true) 
    {
        char tecla = ler_teclado();
        switch (tecla)
        {
        case '1':
            tecla_1_desenho(valor_led, pio, sm, r, g, b);
            break;

        case '2':
            
            break;

        case '3':
            
            break;

        case '4':
            
            break;

        case '5':
            
            break;

        case '6':
            
            break;

        case '7':
            
            break;

        case '8':
            
            break;

        case '9':
            
            break;

        case '0':
            
            break;
           
        default:
            break;
        }
        //tempo de debounce para o botão
        sleep_ms(DEBOUNCE_TIME);
        printf("\nfrequência de clock %ld\r\n", clock_get_hz(clk_sys));
    }
}
