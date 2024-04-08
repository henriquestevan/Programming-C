#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    int vet[25] = {4, 0, 2, 0, 8, 9, 9, 8, 6, 4, 0, 2, 0, 6, 8, 4, 9, 0, 9, 8, 2, 6, 8, 8, 4};
    int qnt_0 = 0, qnt_2 = 0, qnt_4 = 0, qnt_6 = 0, qnt_8 = 0, qnt_9 = 0;
    int correctPassword[6] = {6, 4, 3, 5, 8, 6};
    int i, mov, pos=10, tentativas=0;

    printf("Olá, para abrir esse cofre você deverá adivinhar a senha!!\n");
    sleep(1);

    printf("A senha é composta de 6 dígitos, e para descobri-la, você deverá se deslocar por essa barra escolhendo a posição que\n");
    printf("deseja ir, começando pela posição 10(começa na posição 0, ou seja, 0/1/2...24),\n");
    printf("4, 0, 2, 0, 8, 9, 9, 8, 6, 4, ( 0 ), 2, 0, 6, 8, 4, 9, 0, 9, 8, 2, 6, 8, 8, 4");
    printf("\nSua senha será a quantidade de vezes que cada número aparece em cada movimento");

    printf("\nDigite a posição que deseja ir:");
    scanf("%d", &mov);

    do
    {
     if(mov>25 || mov<0)
     {
         printf("\nPosição inválida");
         return 1;
     }

     if( mov>10)
     {
        for( i = pos; i <= mov; i++)
        {
            if(vet[i] == 0)
            {
                qnt_0++;
            }
            else if(vet[i] == 2)
            {
                qnt_2++;
            }
            else if(vet[i] == 4)
            {
                qnt_4++;
            }
            else if(vet[i] == 6)
            {
                qnt_6++;
            }
             else if(vet[i] == 8)
            {
                qnt_8++;
            }
            else if(vet[i] == 9)
            {
                qnt_9++;
            }

        }
    }

    else
    {
        for( i = pos; i >= mov; i--)
        {
            if(vet[i] == 0)
            {
                qnt_0++;
            }
            else if(vet[i] == 2)
            {
                qnt_2++;
            }
            else if(vet[i] == 4)
            {
                qnt_4++;
            }
            else if(vet[i] == 6)
            {
                qnt_6++;
            }
             else if(vet[i] == 8)
            {
                qnt_8++;
            }
            else if(vet[i] == 9)
            {
                qnt_9++;
            }

        }
    }
    pos=mov;
    tentativas++;
    }while(tentativas<3);

    printf("%d, %d, %d, %d, %d, %d, %d, %d", pos, mov, qnt_0, qnt_2, qnt_4, qnt_6, qnt_8, qnt_9);


    return 0;

}

