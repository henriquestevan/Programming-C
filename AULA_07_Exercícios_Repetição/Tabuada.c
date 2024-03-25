#include <stdio.h>
#include <locale.h>

/*Desenvolva um gerador de tabuada, capaz de gerar a
tabuada de qualquer número inteiro entre 1 a 10. O
usuário deve informar de qual numero ele deseja ver a
tabuada.
*/

int main() {
    
    setlocale(LC_ALL,"portuguese");
    int numero, i;

    
    printf("Digite um numero entre 1 e 10 para gerar a tabuada: ");
    scanf("%d", &numero);

    
    if(numero < 1 || numero > 10) {
        printf("Numero invalido. Por favor, insira um numero entre 1 e 10.\n");
        return 1; 
    }

    
    printf("Tabuada de %d:\n", numero);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0; 
}

