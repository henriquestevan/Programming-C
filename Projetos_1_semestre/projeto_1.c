#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int vet[25] = {4, 0, 2, 0, 8, 9, 9, 8, 6, 4, 0, 2, 0, 6, 8, 4, 9, 0, 9, 8, 2, 6, 2, 8, 4};
    int senhaCorreta[6] = {6, 6, 3, 6, 8, 8};
    int mov, pos_inicial, tentativas = 3, deslizamentos, pos_final;
    int qnt_0, qnt_2, qnt_4, qnt_6, qnt_8, qnt_9;


    printf("\n\tOlá, para abrir esse cofre você deverá adivinhar a senha!!\n");
    printf("\nA senha é composta por 6 dígitos, para descobri-la você deverá se deslocar por uma barra escolhendo a posição que\n");
    printf("deseja ir, começando pela posição 10(A primeira posição é 0, ou seja, 0/1/2...24),\n");
    printf("\nVocê pode fazer até 5 deslizamentos, mas você pode parar a qualquer momento digitando um número negativo!\n");
    printf("\nSua senha será a quantidade de vezes que cada número aparece em cada movimento.\n");
    printf("\nVocê só terá 3 tentativas!!!\n");

    while (tentativas > 0) {
        qnt_0 = 1; qnt_2 = 0; qnt_4 = 0; qnt_6 = 0; qnt_8 = 0; qnt_9 = 0;pos_inicial = 10;

        for (deslizamentos = 0; deslizamentos < 5; deslizamentos++) {
            printf("\nDigite a posição que deseja ir: ");
            scanf("%d", &mov);

            if (mov > 24) {
                printf("Posição inválida\n");
                deslizamentos--;
            }
             else if (mov < 0) {
                    deslizamentos = 5;
             }


            if (mov > pos_inicial && mov <= 24 ) {
                for (pos_final = pos_inicial + 1; pos_final <= mov; pos_final++) {
                    if (vet[pos_final] == 0) qnt_0++;
                    else if (vet[pos_final] == 2) qnt_2++;
                    else if (vet[pos_final] == 4) qnt_4++;
                    else if (vet[pos_final] == 6) qnt_6++;
                    else if (vet[pos_final] == 8) qnt_8++;
                    else if (vet[pos_final] == 9) qnt_9++;
                    pos_inicial = pos_final;
                }
            } else if (mov < pos_inicial && mov >= 0){
                for (pos_final = pos_inicial - 1; pos_final >= mov; pos_final--) {
                    if (vet[pos_final] == 0) qnt_0++;
                    else if (vet[pos_final] == 2) qnt_2++;
                    else if (vet[pos_final] == 4) qnt_4++;
                    else if (vet[pos_final] == 6) qnt_6++;
                    else if (vet[pos_final] == 8) qnt_8++;
                    else if (vet[pos_final] == 9) qnt_9++;
                    pos_inicial = pos_final;
                }
            }
            printf ("\nSenha atual: %d %d %d %d %d %d\n",qnt_0,qnt_2,qnt_4,qnt_6,qnt_8,qnt_9);
        }
        system ("cls");

        if (qnt_0 == senhaCorreta[0] && qnt_2 == senhaCorreta[1] && qnt_4 == senhaCorreta[2] &&
            qnt_6 == senhaCorreta[3] && qnt_8 == senhaCorreta[4] && qnt_9 == senhaCorreta[5]) {
            printf("\nParabéns! Você acertou a senha e abriu o cofre!\n");
            printf("A senha é: 6 6 3 6 8 8");
            break;
        } else {
            printf("\nSenha incorreta. Tente novamente.\n");
            tentativas--;
            printf("\nVocê tem %d tentativas restantes\n", tentativas);
            printf("\nA senha obtida foi: %d %d %d %d %d %d\n",qnt_0,qnt_2,qnt_4,qnt_6,qnt_8,qnt_9);
        }
    }

    if (tentativas == 0) {
        printf("\nVocê excedeu o número de tentativas permitidas. O cofre foi bloqueado!\n");
    }

    return 0;
}
