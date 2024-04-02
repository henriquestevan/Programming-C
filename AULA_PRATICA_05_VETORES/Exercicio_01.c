#include <stdio.h>
#include <locale.h>

/*Fazer um programa que faz a leitura de um vetor X com N
reais , com tamanho máximo igual a 20 e N deverá ser lido.
Calcula o somatório de todos os elementos do vetor.
Imprimir o vetor lido e o valor do somatório*/

int main()
{
    setlocale (LC_ALL, "portuguese");

    float X[20], soma = 0;
    int N, i;

    do
    {
        printf("Digite o tamanho do vetor (máximo 20):");
        scanf("%d", &N);

        if ((N <=0) || (N > 20))
        {
            printf("Tamanho inválido");
        }
    }
        while ((N <= 0) || (N > 20));


    for (i = 0; i < N; i++)
    {
        printf("X[%d]=",i);
        scanf("%f", &X[i]);
        soma += X[i];
    }

    printf("\nElementos do vetor:\n");

    for (i = 0; i < N; i++)
    {
        printf("\n%.1f",X[i]);}
        printf("\n Soma = %.2f", soma);

    return 0;

}
