#include <stdio.h>
#include <locale.h>

/* Elabore um programa que leia um número e imprima todos os
números divisíveis por 4 que sejam menores que este número lido.*/

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num;

    printf("Digite um número:");
    scanf("%d",&num);

    printf("Numeros divisiveis por 4 menores que %d:\n",num);

    for (int i = 1; i < num; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
