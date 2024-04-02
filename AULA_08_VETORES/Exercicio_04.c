#include <stdio.h>
#include <locale.h>
#define MAX 20

/*Fazer um programa que faz a leitura de um vetor X, com N
inteiros, com tamanho máximo igual a 20 e N deverá ser lido.
Gera um segundo vetor com os valores de vetor lido em ordem
inversa. Imprimir o vetor lido e vetor com a ordem inversa*/

int main()
{
    setlocale (LC_ALL, "portuguese");

    float X[MAX], Y[MAX];
    int N;

    printf ("Digite o tamanho do vetor (maximo 20):");
    scanf ("%d", &N);

    if (N <= 0 || N > MAX) {
        printf("Tamanho inválido para os vetores.\n");
        return 1;}


    printf("Digite os elementos do vetor X:\n");

    for (int i = 0; i < N; i++)
    {
        printf("X[%d]=",i);
        scanf("%f", &X[i]);
        Y[(N-1)-i] = X[i];
    }
    system("cls");

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

    return 0;
}
