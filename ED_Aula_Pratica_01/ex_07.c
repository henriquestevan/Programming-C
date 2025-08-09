#include <stdio.h>
#include <locale.h>
#define MAX 8

/*Preencher um vetor de 8 elementos inteiros. Mostrar o vetor
e informar quantos números são maiores que 30*/


int main()
{
    setlocale (LC_ALL, "portuguese");

    int vetor[MAX], maiores_30 = 0;

    printf ("Digite os elementos do vetor:\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("Elemento %d:", i+1);
        scanf ("%d", &vetor[i]);

        if(vetor[i] > 30)
        {
            maiores_30 ++;
        }
    }

    system("cls");

    printf("\nVetor:\n");

    for (int i = 0; i < MAX; i++)
    {
        printf ("Elemento %d: %.1d\n", i+1, vetor[i]);
    }

    printf("\nMaiores do que 30: %d\n", maiores_30);

    return 0;

}
