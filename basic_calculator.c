#include <stdio.h>
#include <stdlib.h> // Para a função system()
#include <locale.h> // Para usar acentos e formatação em português

int main() {
    
    setlocale(LC_ALL, "portuguese");

    char operador;
    double num1, num2, resultado;
  
    system("cls");

    printf("--- Calculadora Simples em C ---\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o operador (+, -, *, /): ");
    // O espaço antes de "%c" é MUITO IMPORTANTE. Ele serve para ignorar
    // qualquer caractere de "espaço em branco" (como o Enter) que ficou
    // no buffer de entrada após o scanf anterior.
    scanf(" %c", &operador);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    // 4. Usa um switch para decidir qual operação fazer
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            // O break é necessário para sair do switch após encontrar o caso correto
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // Caso especial: Verifica se o segundo número é zero
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("\nERRO: Divisao por zero nao e permitida!\n");
                // Termina o programa com um código de erro
                return 1;
            }
            break;
        // default é executado se o operador não for nenhum dos acima
        default:
            printf("\nERRO: Operador invalido!\n");
            // Termina o programa com um código de erro
            return 1;
    }

    // 5. Exibe o resultado final formatado com 2 casas decimais
    printf("\n--- Resultado ---\n");
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operador, num2, resultado);

    return 0;
}
