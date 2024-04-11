#include <stdio.h>
#include <locale.h>

/*Ler um vetor de inteiros 10 posições. Escrever a seguir o
valor e a posição do maior e menor elementos lidos*/

int main()
{
    setlocale (LC_ALL, "portuguese");

     int pos_maior=0, pos_menor=0, i;
     int vetor[10];

     for (i = 0; i < 10; i++)
     {
         printf ("Digite o elemento %d:", i+1);
         scanf ("%d", &vetor[i]);

         if (vetor[i] > vetor[pos_maior])
         {
            pos_maior = i;
         }else
         if (vetor[i] < vetor[pos_menor])
         {
             pos_menor = i;
         }
     }

     printf ("O maior elemento é o %d e está na posição %d\n", vetor[pos_maior], pos_maior);
     printf ("O menor elemento é o %d e está na posição %d", vetor[pos_menor], pos_menor);

     return 0;
}
