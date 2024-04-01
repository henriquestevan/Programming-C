#include <stdio.h>
#include <locale.h>

/*Fazer um programa que faz a leitura de dois vetores X e Y, ambos
com N reais, com tamanho máximo igual a 20 e N deverá ser lido.
Efetua a multiplicação de um vetor por outro, gerando um terceiro
vetor. Imprimir os vetores lidos e o vetor com o produto*/

int main()
{
    setlocale (LC_ALL, "portuguese");

    float X[5];
    float Y[5];
    float Z[5];

    printf("Digite os elementos do vetor X:\n");

    for (int i = 0; i < 5; i++)
    {
       printf ("Elemento %d: ", i+1);
       scanf ("%f", &X[i]);
    }

    printf("Digite os elementos do vetor Y:\n");

    for (int j = 0; j < 5; j++)
    {
       printf ("Elemento %d: ", j+1);
       scanf ("%f", &Y[j]);
    }

    Z[5] = X[5] * Y[5];

    printf("\nVetor X:\n");

    for (int i = 0; i < 5; i++)
    {
        printf ("Elemento %d: %.1f\n", i+1, X[i]);
    }

    printf("\nVetor Y:\n");

    for (int j = 0; j < 5; j++)
    {
        printf ("Elemento %d: %.1f\n", j+1, Y[j]);
    }

    printf("\nVetor Z (Multiplicação entre X e Y):\n");

    for (int l = 0; l < 5; l++)
    {
        printf ("Elemento %d: %.1f\n", l+1, Z[l]);
    }

    return 0;

}
