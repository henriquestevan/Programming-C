#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define MAX_VOOS 15
#define MAX_ESCALAS 5
#define TAM_CIDADE 100

typedef struct
{
    int codigo;
    char origem[TAM_CIDADE];
    char destino[TAM_CIDADE];
    int numEscalas;
    char escalas[MAX_ESCALAS][TAM_CIDADE];
    int teste_codigo;
} Voo;

void incluirVoo(Voo voos[], int *numVoos,int VoosAtuais)
{
    if (*numVoos >= MAX_VOOS)
    {
        printf("Número máximo de voos atingido.\n");
        return;
    }

    Voo v;
    int j,control;
    do
    {
        control=0;
        printf("Código do Voo: ");
        scanf("%d", &v.codigo);
        for(j=0;j<VoosAtuais;j++)
        {
            if(voos[j].codigo==v.codigo)
            {
                control+=1;
            }
        }
        if(control>=1)
        {
            system("cls");
            printf("Código já existente, tente outro!\n");
        }
    }while(control>=1);
    printf("Cidade Origem: ");
    fflush(stdin);
    gets(v.origem);
    printf("Cidade Destino: ");
    fflush(stdin);
    gets(v.destino);
    do
    {
        printf("Número de Escalas (0 a 5): ");
        scanf("%d", &v.numEscalas);
        if (v.numEscalas > 0 && v.numEscalas < 6)
        {
            for (int i = 0; i < v.numEscalas; i++)
            {
                printf("Cidade da Escala %d: ", i + 1);
                fflush(stdin);
                gets(v.escalas[i]);
            }
        }
        else
        {
            printf("Quantidade de Escalas Imcompatível...");
            printf(" Tente novamente com um número entre 0 a 5");
        }
    }while(v.numEscalas < 0 && v.numEscalas > 5);

    voos[*numVoos] = v;
    (*numVoos)++;
    system("cls");
    printf("Voo incluído com sucesso!\n");
}

void alterarVoo(Voo voos[], int numVoos) {
    int codigo;
    printf("Código do Voo a ser alterado: ");
    scanf("%d", &codigo);

    for (int i = 0; i < numVoos; i++) {
        if (voos[i].codigo == codigo) {
            printf("Nova Cidade Origem: ");
            scanf("%s", voos[i].origem);
            printf("Nova Cidade Destino: ");
            scanf("%s", voos[i].destino);
            printf("Novo Número de Escalas (0 a 5): ");
            scanf("%d", &voos[i].numEscalas);
            if (voos[i].numEscalas > 0) {
                for (int j = 0; j < voos[i].numEscalas; j++) {
                    printf("Cidade da Escala %d: ", j + 1);
                    scanf("%s", voos[i].escalas[j]);
                }
            }
            system("cls");

            printf("Voo alterado com sucesso!\n");
            return;
        }
    }
    system("cls");
    printf("Voo não encontrado.\n");
}

void apagarVoo(Voo voos[], int *numVoos) {
    int codigo,i,j;
    printf("Código do Voo a ser apagado: ");
    scanf("%d", &codigo);

    for (i = 0; i < *numVoos; i++) {
        if (voos[i].codigo == codigo) {
            for (j = i; j < *numVoos - 1; j++) {
                voos[j] = voos[j + 1];
            }
            (*numVoos)--;
            system("cls");
            printf("Voo apagado com sucesso!\n");
            return;
        }
    }
    system("cls");
    printf("Voo não encontrado.\n");
}

void voosPorOrigem(Voo voos[], int numVoos) {
    char origem[TAM_CIDADE];
    int contador = 0,i,j;
    printf("Cidade Origem: ");
    fflush(stdin);
    gets(origem);
    for (i = 0; i < numVoos; i++) {
        if (strcmp(voos[i].origem, origem) == 0)
        {
            contador++;
            printf("\nO voo %d sai de %s. ", voos[i].codigo, origem);
            printf("\nDestino do Voo: %s", voos[i].destino);
            if (voos[i].numEscalas > 0)
            {
                for (j= 0; j < voos[i].numEscalas; j++)
                {
                    printf("\nCidade da escala %d: %s",j+1, voos[i].escalas[j]);
                }

            }
        }

    }
    printf("Número total de voos que saem de %s é %d\n", origem, contador);
    system("pause");
    system("cls");
}

void vooMenorEscalas(Voo voos[], int numVoos) {
    char origem[TAM_CIDADE], destino[TAM_CIDADE];
    int i;
    printf("Cidade Origem: ");
    scanf("%s", origem);
    printf("Cidade Destino: ");
    scanf("%s", destino);

    Voo *melhorVoo = NULL;
    for (i = 0; i < numVoos; i++) {
        if (strcmp(voos[i].origem, origem) == 0 && strcmp(voos[i].destino, destino) == 0) {
            if (melhorVoo == NULL || voos[i].numEscalas < (*melhorVoo).numEscalas) {
                melhorVoo = &voos[i];
            }
        }
    }

    if (melhorVoo != NULL) {
        printf("Voo com menor número de escalas:\n");
        printf("Código: %d\n", (*melhorVoo).codigo);
        printf("Origem: %s\n", (*melhorVoo).origem);
        printf("Destino: %s\n", (*melhorVoo).destino);
        printf("Número de Escalas: %d\n", (*melhorVoo).numEscalas);
        for (i = 0; i < (*melhorVoo).numEscalas; i++) {
            printf("Escala %d: %s\n", i + 1, (*melhorVoo).escalas[i]);
        }
        system("pause");
        system("cls");
    } else {
        system("cls");
        printf("Nenhum voo encontrado com a origem e destino especificados.\n");
    }
}

void voosPorDestino(Voo voos[], int numVoos) {
    char destino[TAM_CIDADE];
    printf("Cidade Destino: ");
    scanf("%s", destino);

    int encontrado = 0;
    for (int i = 0; i < numVoos; i++) {
        if (strcmp(voos[i].destino, destino) == 0) {
            printf("Código: %d, Origem: %s\n", voos[i].codigo, voos[i].origem);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        system("cls");
        printf("Nenhum voo encontrado para o destino especificado.\n");
    }
}

void HistoricoVoos (Voo voos[],int numVoos) {

    int i,j;
    for(i=0;i<numVoos;i++) {
        printf("\n\t%dº voo registrado", i+1);
        printf("\nCódigo do Voo: %d ", voos[i].codigo);
        printf("\nOrigem do Voo: %s", voos[i].origem);
        printf("\nDestino do Voo: %s", voos[i].destino);
        printf("\nQuantidade de escalas: %d\n", voos[i].numEscalas);
        for(j=0;j<voos[i].numEscalas;j++) {
            printf("Cidade da escala %d: %s\n",j+1, voos[i].escalas[j]);
        }
    }
    printf("\n\tO número total de voos registrados são %d\n", i);
    system("pause");
    system("cls");

}

int main() {
    setlocale(LC_ALL,"portuguese");

    Voo voos[MAX_VOOS];
    int numVoos = 0;
    int opcao;
    printf("Seja bem-vindo à 'Voe Sempre, Voe Feliz'.\nAqui você pode registrar voos e verificar os mesmos.\n");
    system("pause");
    system("cls");

    do {
        printf("\nMenu:\n");
        printf("1. Incluir voos\n");
        printf("2. Alterar as informações sobre um voo\n");
        printf("3. Apagar um voo\n");
        printf("4. Voos que saem de certa cidade\n");
        printf("5. Melhor Voo de um destino para outro\n");
        printf("6. Escolha uma cidade e mostraremos todos os voos com suas cidades de origem\n");
        printf("7. Sair do sistema\n");
        printf("8. Mostrar voos registrados\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls");
                incluirVoo(voos, &numVoos, numVoos);
                break;
            case 2:
                system("cls");
                alterarVoo(voos, numVoos);
                break;
            case 3:
                system("cls");
                apagarVoo(voos, &numVoos);
                break;
            case 4:
                system("cls");
                voosPorOrigem(voos, numVoos);
                break;
            case 5:
                system("cls");
                vooMenorEscalas(voos, numVoos);
                break;
            case 6:
                system("cls");
                voosPorDestino(voos, numVoos);
                break;
            case 7:
                system("cls");
                printf("Saindo do sistema...\n");
                break;
            case 8:
                system("cls");
                HistoricoVoos(voos, numVoos);
                break;
            default:
                system("cls");
                printf("Opção inválida.\n");
        }
    } while (opcao != 7);


    return 0;
}
