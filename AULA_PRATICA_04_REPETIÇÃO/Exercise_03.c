#include <stdio.h>
#include <locale.h>

/* Escreva um programa que solicita 10 números ao usuário, e ao final mostre
os dois maiores números digitados pelo usuário. */

int main() {

    setlocale(LC_ALL,"portuguese");

    int numeros[10];
    int maior1, maior2;


    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }


    if (numeros[0] > numeros[1]) {
        maior1 = numeros[0];
        maior2 = numeros[1];
    } else {
        maior1 = numeros[1];
        maior2 = numeros[0];
    }


    for (int i = 2; i < 10; i++) {
        if (numeros[i] > maior1) {
            maior2 = maior1;
            maior1 = numeros[i];
        } else if (numeros[i] > maior2) {
            maior2 = numeros[i];
        }
    }


    printf("Os dois maiores numeros digitados sao: %d e %d\n", maior1, maior2);

    return 0;
}

