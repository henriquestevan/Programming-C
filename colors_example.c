#include <stdio.h>

// --- Macros para as cores ANSI ---

// Cores do texto
#define ANSI_COLOR_BLACK   "\x1b[30m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_WHITE   "\x1b[37m"

// Cores do fundo (background)
#define ANSI_BG_BLACK   "\x1b[40m"
#define ANSI_BG_RED     "\x1b[41m"
#define ANSI_BG_GREEN   "\x1b[42m"
#define ANSI_BG_YELLOW  "\x1b[43m"
#define ANSI_BG_BLUE    "\x1b[44m"
#define ANSI_BG_MAGENTA "\x1b[45m"
#define ANSI_BG_CYAN    "\x1b[46m"
#define ANSI_BG_WHITE   "\x1b[47m"

// Macro para RESETAR a cor para o padrão do terminal
// É MUITO IMPORTANTE usar isso no final!
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    printf("--- Teste de Cores no Terminal com ANSI ---\n\n");

    // Você simplesmente coloca a macro da cor antes do texto
    // e a macro de reset depois.

    printf(ANSI_COLOR_RED     "Este texto e vermelho."     ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_GREEN   "Este texto e verde."      ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_YELLOW  "Este texto e amarelo."    ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_BLUE    "Este texto e azul."       ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_MAGENTA "Este texto e magenta."    ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_CYAN    "Este texto e ciano."      ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_WHITE   "Este texto e branco."     ANSI_COLOR_RESET "\n");

    printf("\nVoce tambem pode combinar cores de texto e fundo!\n");
    printf(ANSI_COLOR_WHITE ANSI_BG_BLUE "Texto branco sobre fundo azul." ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_BLACK ANSI_BG_YELLOW "Texto preto sobre fundo amarelo." ANSI_COLOR_RESET "\n");
    
    // O reset é fundamental, senão o terminal continuaria com a última cor usada.
    printf("\nDe volta ao normal.\n");

    return 0;
}
