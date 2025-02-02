#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "pico/bootrom.h"
#include "pio_matrix.pio.h" 
#include "init_GPIO.h" // biblioteca que inicializa teclado e o botão
#include "frames.h" // biblioteca com os frames
#include "config_leds.h" // biblioteca com a config dos leds
#include <time.h>
#include "cor.h"

// Debounce (em milissegundos)
#define DEBOUNCE_TIME 300

// função principal
int main()
{
    // Inicializa todos os códigos stdio padrão que estão ligados ao binário.
    stdio_init_all();

    init_GPIO();
    
    PIO pio = pio0; 
    uint32_t valor_led;
    double r = 0.0, b = 0.0 , g = 0.0; 
    bool ok;
    int corr=0;
    ok = set_sys_clock_khz(128000, false); // coloca a frequência de clock para 128 MHz, facilitando a divisão pelo clock    

    // configurações da PIO
    uint offset = pio_add_program(pio, &pio_matrix_program);
    uint sm = pio_claim_unused_sm(pio, true);
    pio_matrix_program_init(pio, sm, offset, OUT_PIN);
    srand(time(NULL)); // ativa os números aleatórios

    while (true) 
    {
        char tecla = ler_teclado();
        switch (tecla)
        {
        case '1':
            setar_leds_azul(tecla1_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame6, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame7, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            break;

        case '2':
            setar_leds_azul(tecla2_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_verde(tecla2_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_amarelo(tecla2_frame3, valor_led, pio, sm, r, g, b); 
            sleep_ms(500);
            setar_leds_vermelho(tecla2_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_roxo(tecla2_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            break;

        case '3':
            setar_leds_roxo(tecla3_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(tecla3_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_verde(tecla3_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_vermelho(tecla3_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_roxo(tecla3_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(tecla3_frame6, valor_led, pio, sm, r, g, b);
            sleep_ms(500);        
            break;

        case '4':
            setar_leds_verde(tecla4_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_roxo(tecla4_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_vermelho(tecla4_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(tecla4_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_ciano(tecla4_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_verde(tecla4_frame6, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            break;

        case '5':
            setar_leds_azul(tecla5_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(tecla5_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_verde(tecla5_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_vermelho(tecla5_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_ciano(tecla5_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_roxo(tecla5_frame6, valor_led, pio, sm, r, g, b);
            sleep_ms(500);        
            break;

        case '6':
            corr++;
            if (corr == 16) {
                corr = 0;
            }
            
            cor(corr, &r, &g, &b);
            setar_leds_misto(tecla6_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_misto(tecla6_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_misto(tecla6_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_misto(tecla6_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_misto(tecla6_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_misto(tecla6_frame6, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            break;

        case '7':
            setar_leds_vermelho(tecla7_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(tecla7_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(tecla7_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(tecla7_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(tecla7_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            break;

        case '8':
            
            setar_leds_azul(tecla8_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame1, valor_led, pio, sm, r, g, b); 
            
            break;

        case '9':
            break;

        case '0':
            setar_leds_verde(teclaC_frame, valor_led, pio, sm, r, g, b);
            break;
        
        case 'A':
            setar_leds_todas_cores(teclaA_frame, valor_led, pio, sm, r, g, b);
            break;

        case 'B':
            setar_leds_azul(teclaB_frame, valor_led, pio, sm, r, g, b);
            break;

        case 'C':
            setar_leds_vermelho(teclaC_frame, valor_led, pio, sm, r, g, b);
            break;

        case 'D':
            setar_leds_verde(teclaC_frame, valor_led, pio, sm, r, g, b);
            break;

        case '*':
            reset_usb_boot(0, 0);
            break;

        case '#':
            setar_leds_todas_cores(teclaHASHTAG_frame, valor_led, pio, sm, r, g, b);
            break;    

        default:
            break;
        }
        // tempo de debounce para o botão
        sleep_ms(DEBOUNCE_TIME);
        printf("\nfrequência de clock %ld\r\n", clock_get_hz(clk_sys));
    }
}
