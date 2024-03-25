#include <stdio.h>

int main() {
    int numero, i;

    // Solicita ao usuário o número para gerar a tabuada
    printf("Digite um numero entre 1 e 10 para gerar a tabuada: ");
    scanf("%d", &numero);

    // Verifica se o número está dentro do intervalo válido
    if(numero < 1 || numero > 10) {
        printf("Numero invalido. Por favor, insira um numero entre 1 e 10.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Imprime a tabuada do número fornecido pelo usuário
    printf("Tabuada de %d:\n", numero);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0; // Retorna 0 para indicar sucesso
}
