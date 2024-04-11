#include <stdio.h>
#include <locale.h>
#define MAX 15

/*Fazer um programa em C para ler um vetor de inteiros
positivos de 15 posições, no máximo. Imprimir a quantidade
de números pares e a quantidade de múltiplos de 5*/

int main()
{
    setlocale (LC_ALL, "portuguese");

    int vet[MAX], qnt_pares = 0, qnt_mult = 0, i;

    for (i = 0; i < MAX; i++)
    {
        printf ("Digite o elemento %d:", i);
        scanf ("%d", &vet[i]);

        if (vet[i]%2 == 0)
        {
            qnt_pares++;
        }
        if (vet[i]%5 == 0)
        {
            qnt_mult++;
        }
    }

    printf ("Quantidade de pares:%d\n", qnt_pares);

    printf ("Quantidade de multiplos de 5:%d", qnt_mult);

    return 0;
}
