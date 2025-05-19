#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_VEICULOS 20
#define MAX_PLACA 8
#define MAX_MARCA 50
#define MAX_MODELO 50

typedef struct {
    char placa[MAX_PLACA];
    char marca[MAX_MARCA];
    char modelo[MAX_MODELO];
    int ano;
} Veiculo;

int numVeiculos = 0;
Veiculo veiculos[MAX_VEICULOS];

// Função para cadastrar as informações de um veículo
void cadastrarVeiculo() {
    if (numVeiculos >= MAX_VEICULOS) {
        printf("Limite de veículos cadastrados atingido!\n");
        return;
    }

    printf("\nVeículo %d:\n", numVeiculos + 1);
    printf("Placa (formato AAADDDD): ");
    scanf("%s", veiculos[numVeiculos].placa);

    printf("Marca: ");
    scanf("%s", veiculos[numVeiculos].marca);

    printf("Modelo: ");
    scanf("%s", veiculos[numVeiculos].modelo);

    printf("Ano: ");
    scanf("%d", &veiculos[numVeiculos].ano);

    numVeiculos++;
    printf("Veículo cadastrado com sucesso!\n");
}

// Função para verificar se uma placa está no formato correto (AAADDDD)
int verificarPlaca(char placa[]) {
    int len = strlen(placa);
    if (len != 7)
        return 0;

    for (int i = 0; i < 3; i++) {
        if (!isalpha(placa[i]))
            return 0;
    }

    for (int i = 3; i < 7; i++) {
        if (!isdigit(placa[i]))
            return 0;
    }

    return 1;
}

// Função para imprimir veículos por ano (mínimo e máximo)
void imprimirPorAno() {
    int anoMin, anoMax;
    printf("\nDigite o ano mínimo: ");
    scanf("%d", &anoMin);
    printf("Digite o ano máximo: ");
    scanf("%d", &anoMax);

    printf("\nVeículos cadastrados no intervalo de anos [%d, %d]:\n", anoMin, anoMax);
    for (int i = 0; i < numVeiculos; i++) {
        if (veiculos[i].ano >= anoMin && veiculos[i].ano <= anoMax) {
            printf("Placa: %s | Marca: %s | Modelo: %s | Ano: %d\n", veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo, veiculos[i].ano);
        }
    }
}

// Função para pesquisar um veículo por placa
int pesquisarPorPlaca(char placa[]) {
    for (int i = 0; i < numVeiculos; i++) {
        if (strcmp(veiculos[i].placa, placa) == 0) {
            return i; // Retorna o índice do veículo se encontrado
        }
    }
    return -1; // Retorna -1 se não encontrado
}

// Função para imprimir todos os veículos cadastrados
void imprimirTodosVeiculos() {
    printf("\nTodos os veículos cadastrados:\n");
    for (int i = 0; i < numVeiculos; i++) {
        printf("Placa: %s | Marca: %s | Modelo: %s | Ano: %d\n", veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo, veiculos[i].ano);
    }
}

int main() {
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1 - Cadastrar informações de um veículo\n");
        printf("2 - Verificar placa no formato correto (AAADDDD)\n");
        printf("3 - Imprimir por ano\n");
        printf("4 - Pesquisar veículo por placa\n");
        printf("5 - Imprimir todos os veículos cadastrados\n");
        printf("0 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarVeiculo();
                break;
            case 2:
                char placaVerificar[MAX_PLACA];
                printf("\nDigite a placa a ser verificada: ");
                scanf("%s", placaVerificar);
                if (verificarPlaca(placaVerificar)) {
                    printf("Placa no formato correto!\n");
                } else {
                    printf("Placa em formato incorreto!\n");
                }
                break;
            case 3:
                imprimirPorAno();
                break;
            case 4:
                char placaPesquisar[MAX_PLACA];
                printf("\nDigite a placa a ser pesquisada: ");
                scanf("%s", placaPesquisar);
                int indiceVeiculo = pesquisarPorPlaca(placaPesquisar);
                if (indiceVeiculo != -1) {
                    printf("Veículo encontrado:\n");
                    printf("Placa: %s | Marca: %s | Modelo: %s | Ano: %d\n", veiculos[indiceVeiculo].placa, veiculos[indiceVeiculo].marca, veiculos[indiceVeiculo].modelo, veiculos[indiceVeiculo].ano);
                } else {
                    printf("Veículo não encontrado!\n");
                }
                break;
            case 5:
                imprimirTodosVeiculos();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
