#include <stdio.h>
#include <locale.h>

/*Escrever um algoritmo que leia uma quantidade desconhecida de
números e conte quantos deles estão nos seguintes intervalos:
[0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve
terminar quando for lido um número negativo.*/

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num,C1=0,C2=0,C3=0,C4=0;

    printf("Digite uma quantidade desconhecida de números (digite um numero negativo para encerrar):\n");

    while (1)
    {
        printf("Digite um número:");
        scanf("%d",&num);

        if (num < 0){
            break;
        }

        if (num >= 0 && num <= 25){
                C1++;
        } else if (num >= 26 && num <= 50) {
            C2++;
        } else if (num >= 51 && num <= 75) {
            C3++;
        } else if (num >= 76 && num <= 100) {
            C4++;
        }

    }

    printf("Quantidade de numeros nos intervalos:\n");
    printf("[0,25]: %d\n", C1);
    printf("[26,50]: %d\n", C2);
    printf("[51,75]: %d\n", C3);
    printf("[76,100]: %d\n", C4);

    return 0;

}
