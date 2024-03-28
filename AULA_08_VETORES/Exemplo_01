#include <stdio.h>
#include <locale.h>

/*Ler um vetor de reais com no máximo 10 posições.
Escrever a seguir o valor do maior elemento e a
respectiva posição que ele ocupa no vetor*/

int main()
{
    setlocale (LC_ALL, "portuguese");

    float vetor[10];
    int i, posicao_maior;
    float maior;

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Elemento %d: ", i+1);
        scanf("%f", &vetor[i]);
    }

    maior = vetor[0];
    posicao_maior = 0;
    for (i = 1; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao_maior = i;
        }
    }


    printf("\nO maior elemento é %.2f e está na posição %d.\n", maior, posicao_maior + 1);

    return 0;
}


