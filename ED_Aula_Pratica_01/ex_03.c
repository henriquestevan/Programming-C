#include <stdio.h>
#include <locale.h>

/*O quadrado de um número natural N é dado pela soma dos N
primeiros números ímpares consecutivos. Por exemplo:
32 = 1+3+5=9
42 = 1+3+5+7=16
Elabore um programa que leia um número natural N ecalcule
o seu quadrado usando o cálculo acima.*/

int main()
{
	setlocale(LC_ALL,"portuguese");

	int numero, quadrado=1, comp=1;

	printf("Digite um numero:");
	scanf("%d",&numero);

	for(int i=1; i<numero;i++)
	{
		comp = comp + 2;

		quadrado = quadrado + comp;
	}
	printf("\nQuadrado: %d", quadrado);

	return 0;
}
