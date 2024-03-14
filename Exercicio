#include <stdio.h>
#include <locale.h>

//Exercício: Elabore um programa que some os N primeiros números pares,
// N é fornecido pelo usuário

int main()
{
    setlocale(LC_ALL,"portuguese");
    int N, soma=0;

    printf("Digite a quantidade de números pares:");
    scanf("%d",&N);

    for (int i=1; i<=N; i++)
    {
        soma += 2*i; // cada número par é igual a 2 vezes o seu índice
    }
    printf("A soma dos primeiros %d números pares é: %d\n\n",N,soma);
    return 0;
}
