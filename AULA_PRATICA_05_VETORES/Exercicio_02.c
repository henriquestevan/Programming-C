#include <stdio.h>
#include <locale.h>

/*Elaborar um programa que leia um vetor de no máximo 15
elementos inteiros. O programa deverá imprimir o vetor e
informar quantos números são maiores que 30*/

int main()
{
    setlocale (LC_ALL, "portuguese");

    int vetor[3], maiores_30 = 0;

    printf ("Digite os elementos do vetor:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Elemento %d:", i+1);
        scanf ("%d", &vetor[i]);

        if(vetor[i] > 30)
        {
            maiores_30 ++;
        }
    }

    system("cls");

    printf("\nVetor X:\n");

    for (int i = 0; i < 3; i++)
    {
        printf ("Elemento %d: %.1d\n", i+1, vetor[i]);
    }

    printf("\nMaiores do que 30: %d", maiores_30);

    return 0;

}
