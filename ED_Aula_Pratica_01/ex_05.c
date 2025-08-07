#include <stdio.h>

/*Dada a sequência matemática de números 2, 3, 5,8,13, 21....
Construa um programa que calcule a soma desta sequência
para os N primeiros termo onde, N é fornecido pelo usuário.
• Exemplo: N=5 S= 2+3+5+8+13 =31*/

int main()
{
	int N,soma=0, termo_anterior, termo_atual, termo_seguinte;

	printf("Digite um valor maior que 1 para N:");
	scanf("%d",&N);

	if(N <= 0){
		soma = 0;
	} else if (N == 1) {
		soma = 2;
		printf("Sequencia gerada: 2\n");
	} else {
		termo_anterior = 2;
		termo_atual = 3;

		soma = termo_anterior + termo_atual;

		printf("Sequencia gerada: %d, %d", termo_anterior, termo_atual);

		for(int i=3; i<=N;i++)
		{
			termo_seguinte = termo_anterior + termo_atual;

			soma = soma + termo_seguinte;

			printf(", %d", termo_seguinte);

			termo_anterior = termo_atual;
			termo_atual = termo_seguinte;
		}
		printf("\n");}

		printf("\nA soma dos %d primeiros termos da sequencia e: %d\n", N, soma);

		return 0;
}
