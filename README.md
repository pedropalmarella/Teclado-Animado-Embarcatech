# Projeto: Geração de Animações em Matriz de LEDs 5x5

## Descrição
Este projeto é uma tarefa do programa EMBARCATECH para realizar a implementação de um sistema que gera animações em uma matriz de LEDs 5x5, utilizando um Raspberry Pi Pico W e um teclado matricial 4x4.

## Integrantes:
- Pedro Henrique Palmarella Rodrigues - Github: pedropalmarella
- Vinícius Lemos de Carvalho - GitHub: ViniciusLemosDev
- Kailane Bitencourt dos Santos - GitHub: KailaneBitencourt
- André Lucas Rocha Santos - GitHub: DecoTchan
- Fabio Ricardo de Oliveira Silva Filho - GitHub: fabiooliveiraaa 
- Gabriel Santos dos Santos - Github: GSdosSantos
- Cláudio Marinho dos Santos Junior - GitHub: Claudio-Marinho
- Felipe Silva - GitHub: Felpzs0206

## Funcionalidades

1. **Animações Controladas pelas Teclas (0 a 9):**
   - Cada tecla do teclado matricial gera uma animação exclusiva na matriz de LEDs.
   - Todas as animações possuem, no mínimo, 5 frames.
     
    | Tecla | Responsável        | Observações                |
    |-------|--------------------|----------------------------|
    | 1     | Pedro Palmarella   | Animação da tecla 1        |
    | 2     | Fabio Oliveira     | Animação da tecla 2        |
    | 3     | Vinicius Lemos     | Animação da tecla 3        |
    | 4     | Cláudio Marinho    | Animação da tecla 4        |
    | 5     | André Lucas        | Animação da tecla 5        |
    | 6     | Gabriel Santos     | Animação da tecla 6        |
    | 7     | Kailane Bitencourt | Animação da tecla 7        |
    | 8     | Felipe Silva       | Animação da tecla 8        |
   


2. **Comandos Específicos:**
   - **Tecla A:** Desliga todos os LEDs.
   - **Tecla B:** Liga todos os LEDs na cor azul com 100% de intensidade.
   - **Tecla C:** Liga todos os LEDs na cor vermelha com 80% de intensidade.
   - **Tecla D:** Liga todos os LEDs na cor verde com 50% de intensidade.
   - **Tecla #:** Liga todos os LEDs na cor branca com 20% de intensidade.

## Componentes Utilizados

- **Hardware:**
  - Raspberry Pi Pico W.
  - Teclado matricial 4x4.
  - Matriz de LEDs WS2812 (5x5).

- **Software:**
  - Linguagem C com Pico SDK.
  - Simulador Wokwi integrado ao VS Code.

## Como Executar

### Requisitos
1. **Ferramentas Necessárias:**
   - Visual Studio Code (VS Code).
   - Pico SDK instalado e configurado.
   - Simulador Wokwi.
   - Conexão à internet para clonar o repositório.

2. **Passos para Configuração:**
   - Clone este repositório:
     ```bash
     git clone https://github.com/pedropalmarella/Teclado-Animado-Embarcatech
     ```
   - Navegue até a pasta do projeto:
     ```bash
     cd Teclado-Animado-Embarcatech
     ```
   - Configure o ambiente do Pico SDK e Wokwi no VS Code conforme as instruções da [documentação oficial do Pico SDK](https://www.raspberrypi.com/documentation/microcontrollers/).

3. **Execução no Wokwi:**
   - Abra o projeto no VS Code.
   - Inicie a simulação no Wokwi para testar os comandos e animações.

## Estrutura do Projeto

- **frames.h:** Contém os frames (imagens) usados para as animações de cada tecla.
- **pio_matrix.c:** Arquivo principal do programa que gerencia o teclado, animações e LEDs.
- **init_GPIO.h:** Configuração das entradas e saídas do teclado e botões.
- **config_leds.h:** Fornece uma API para controlar a matriz de LEDs 5x5, com funções para configurar cores específicas, criar padrões personalizados e gerenciar a comunicação com os LEDs.
- **cor.h:** Define 16 cores RGB em rgb_matrix e a função cor, que retorna os valores RGB de uma cor pelo índice fornecido, facilitando o uso de cores predefinidas em animações.
- **wokwi.toml** Arquivo de configuração do Wokwi, usado para definir a versão do projeto e especificar os arquivos de firmware e ELF a serem utilizados.
- **pico_sdk_import.cmake** Configura e importa o Raspberry Pi Pico SDK, verificando o caminho, baixando se necessário e incluindo no projeto.
- **diagram.json** Configura uma Raspberry Pi Pico W no Wokwi com um teclado matricial e 25 LEDs RGB (NeoPixels), permitindo controle dos LEDs via teclado.
- **pio_matrix.pio** Controla um pino de saída na Raspberry Pi Pico, alternando valores com temporizações.
- **CMakeLists.txt** Configura um projeto para a Raspberry Pi Pico, incluindo o SDK, bibliotecas padrão e suporte a PIO. Ele define o executável pio_matrix, ativa saída USB e gera um cabeçalho PIO.

## Resultados e Demonstração

- Um vídeo com duração máxima de 3 minutos foi produzido para apresentar o funcionamento do projeto. Você pode assistir ao vídeo através do seguinte link:
  [Apresentação do Projeto](https://youtu.be/JNxLqu3ZwCw).

---

**Desenvolvido por:** Grupo 3 - Subgrupo 3 | Embarcatech.
