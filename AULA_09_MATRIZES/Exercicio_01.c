#include <stdio.h>
#include <locale.h>

/* Elabore um programa que leia uma matriz de reais 5x5 e
determine o maior elemento e a posição do mesmo*/

int main()
{
    setlocale (LC_ALL, "portuguese");

    int i, j, L = 0, C = 0;
    float M[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf ("M[%d][%d] = ", i, j);
            scanf ("%d", &M[i][j]);

            if (M[i][j] > M[L][C])
            {
                L = i;
                C = j;
            }
        }
    }
    printf ("Matriz =\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf ("%.1f", M[i][j]);
        }
        printf("\n");
    }

    printf ("maior = %.1f", M[L][C]);
    printf ("Posição maior: L = %d, C = %d", L, C);

    return 0;
}
