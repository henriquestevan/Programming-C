#include <stdio.h>

/*Escreva um programa que calcule e imprima o valor de S:
       S = 1/1 - 2/4 + 3/9 - 4/16 + ... - 10/100*/

int main()
{

	float S=0, A=1, B=2;

	for(int i=0; i<5; i++)
	{
		S+=((1/A) - (1/B));

		A+=2;
		B+=2;

	}

	printf("S = %f",S);
	
	return 0;
}
