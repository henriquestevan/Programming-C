#include <stdio.h>
#include <locale.h>
#define MAX 20

/*Fazer um programa que faz a leitura de dois vetores X e Y, ambos
com N reais, com tamanho máximo igual a 20 e N deverá ser lido.
Efetua a multiplicação de um vetor por outro, gerando um terceiro
vetor. Imprimir os vetores lidos e o vetor com o produto*/

int main()
{
    setlocale (LC_ALL, "portuguese");

    float X[MAX], Y[MAX], RESULTADO[MAX];
    int N;

    printf ("Digite o tamanho dos vetores (maximo 20):");
    scanf ("%d", &N);

    if (N <= 0 || N > MAX) {
        printf("Tamanho inválido para os vetores.\n");
        return 1;}


    printf("Digite os elementos do vetor X:\n");

    for (int i = 0; i < N; i++)
    {
       printf ("Elemento %d: ", i+1);
       scanf ("%f", &X[i]);
    }

    printf("Digite os elementos do vetor Y:\n");

    for (int j = 0; j < N; j++)
    {
       printf ("Elemento %d: ", j+1);
       scanf ("%f", &Y[j]);
    }

    printf("\nVetor X:\n");

    for (int i = 0; i < N; i++)
    {
        printf ("Elemento %d: %.1f\n", i+1, X[i]);
    }

    printf("\nVetor Y:\n");

    for (int j = 0; j < N; j++)
    {
        printf ("Elemento %d: %.1f\n", j+1, Y[j]);
    }

    for (int i = 0; i < N; i++) {
        RESULTADO[i] = X[i] * Y[i];}

    printf("\nVetor Z (Multiplicação entre X e Y):\n");

    for (int l = 0; l < N; l++)
    {
        printf ("Elemento %d: %.1f\n", l+1, RESULTADO[l]);
    }
  return 0;
}




