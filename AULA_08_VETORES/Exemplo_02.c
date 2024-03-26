#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dado 2 vetores de N elementos inteiros, gerar um terceiro
vetor que seja a soma desses 2 vetores. O valor de N deve
ser lido e é no máximo 50 */

int main()
{
    setlocale (LC_ALL, "portuguese");

    int A[50], B[50], S[50], i, N;

    do
    {
        printf("Digite o tamanho do vetor (maximo 50):");
        scanf ("%d",&N);

        if ((N < 1) || (N > 50))
        {
          printf("Número inválido!\n");
        }
    } while ((N < 1) || (N > 50));


    for (i = 0; i < N; i++)
    {
        printf("A[%d] = ",i);
        scanf ("%d",&A[i]);
    }
    for (i = 0; i < N; i++)
    {
        printf("B[%d] =",i);
        scanf ("%d",&B[i]);
        S[i] = A[i] + B[i];
    }

    system("cls");

    printf("\tSoma dos vetores:\n");

    for (i = 0; i < N; i++)
    {
        printf("\t\n %.3d + %.3d = %.4d\n", A[i], B[i], S[i]);
    }
    return 0;
}
