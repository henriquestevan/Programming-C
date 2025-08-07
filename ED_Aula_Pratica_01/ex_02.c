#include <stdio.h>
#include <locale.h>

/*Construa um programa que leia vários números inteiros
positivos. O programa será encerrado quando um número
NÃO positivo for digitado e irá calcular:
• A quantidade de números lidos
• A soma dos números que são múltiplos de 3 maiores que
10
• A quantidade de múltiplos de 3
• O percentual de múltiplos de 7*/

int main()
{
	setlocale(LC_ALL,"portuguese");

	int numero, contador = 0, multiplos3 = 0, cont7 = 0, bigmulti3 = 0;
	float percentual;

	while(numero>0)
	{
		printf("\nDigite um numero:");
		scanf("%d",&numero);

		contador++;
		if(numero%3==0)
		{
			multiplos3++;
			if(numero>10)
			{
				bigmulti3++;
			}
		}
		if(numero%7==0)
		{
			cont7++;
		}
	}
	percentual = (float)cont7/contador;
	percentual = percentual * 100;

	printf("\nQuantidade de números: %d", contador);
	printf("\nQuantidade de números múltiplos de 3: %d", multiplos3);
	printf("\nQuantidade de números múltiplos de 3 e maiores que 10: %d", bigmulti3);
	printf("\nPercentual de 7: %.2f", percentual);

	return 0;
}
