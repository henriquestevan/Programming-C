#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    int vetor[25] = {4, 0, 2, 0, 8, 9, 9, 8, 6, 4, 0, 2, 0, 6, 8, 4, 9, 0, 9, 8, 2, 6, 8, 8, 4};
    int qnt_0, qnt_2, qnt_4, qnt_6, qnt_8, qnt_9;
    int correctPassword[6] = {6, 4, 3, 5, 8, 6};

    printf("Olá, para abrir esse cofre você deverá adivinhar a senha!!\n");
    sleep(1);

    printf("A senha é composta de 6 dígitos, e para descobri-la, você deverá se deslocar por essa barra escolhendo a posição que\n");
    printf("deseja ir, começando pela posição 10(começa na posição 0, ou seja, 0/1/2...24),\n");
    printf("4, 0, 2, 0, 8, 9, 9, 8, 6, 4, 0, 2, 0, 6, 8, 4, 9, 0, 9, 8, 2, 6, 8, 8, 4");

    return 0;

}
