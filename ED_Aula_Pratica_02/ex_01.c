#include <stdio.h>
#include <locale.h>

//--- Versão A: A função retorna o resultado diretamente ---
// A função é do tipo 'float', então ela deve usar o comando 'return'
// para devolver um valor do tipo float.
float calculo_versao_A(float x, float y, float z) {
    // Calcula a expressão e a retorna diretamente.
    return (x * x) + y + z;
}

//--- Versão B: A função não retorna nada (void), mas altera um valor usando um ponteiro ---
// A função é do tipo 'void', então não usa 'return' para devolver um valor.
// O parâmetro 'float *r' é um PONTEIRO. Ele recebe o ENDEREÇO de uma variável
// que está na função 'main'.
void calculo_versao_B(float x, float y, float z, float *r) {
    // O '*' antes do 'r' aqui significa "vá para o endereço de memória que 'r' está
    // apontando e coloque o resultado do cálculo LÁ".
    // Isso modifica diretamente a variável 'resultadoB' da função main.
    *r = (x * x) + y + z;
}


int main() {
    setlocale(LC_ALL, "portuguese");

    float n1, n2, n3;
    float resultadoA, resultadoB;

    // 1. Leitura dos valores no programa principal
    printf("--- Calculo da expressao (x*x)+y+z ---\n");
    printf("Digite o valor de x (n1): ");
    scanf("%f", &n1);

    printf("Digite o valor de y (n2): ");
    scanf("%f", &n2);

    printf("Digite o valor de z (n3): ");
    scanf("%f", &n3);

    printf("\n---------------------------------------------\n");

    // --- Chamando a Versão A ---
    // O valor retornado pela função é armazenado na variável 'resultadoA'
    resultadoA = calculo_versao_A(n1, n2, n3);
    printf("Resultado usando a funcao (versao A - com return): %.2f\n", resultadoA);


    // --- Chamando a Versão B ---
    // Aqui, passamos os valores e também o ENDEREÇO da variável 'resultadoB'
    // usando o operador '&'. A função irá colocar o resultado diretamente nela.
    calculo_versao_B(n1, n2, n3, &resultadoB);
    printf("Resultado usando a funcao (versao B - com ponteiro): %.2f\n", resultadoB);


    return 0;
}
