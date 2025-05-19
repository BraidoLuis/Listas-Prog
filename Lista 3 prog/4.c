#include <stdio.h>

typedef struct {
    int matriz1[4][4];
    int matriz2[4][4];
    int matriz3[4][4];
    int vetor1[16];
    int vetor2[16];
} EstruturaMatrizesVetores;

// Função para calcular a matriz transposta
void transposta(int matriz[4][4], int transposta[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

// Função para encontrar o maior elemento na matriz
int encontrarMaiorElemento(int matriz[4][4]) {
    int maior = matriz[0][0];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

// Função para multiplicar a matriz pelo seu maior elemento
void multiplicarPorMaiorElemento(int matriz[4][4], int resultado[4][4], int maior) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = matriz[i][j] * maior;
        }
    }
}

// Função para armazenar a matriz em um vetor sequencial
void matrizParaVetor(int matriz[4][4], int vetor[16]) {
    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            vetor[index++] = matriz[i][j];
        }
    }
}

// Função para multiplicar a matriz pela sua transposta e armazenar no vetor
void multiplicarPorTranspostaEArmazenar(int matriz[4][4], int vetor[16]) {
    int transpost[4][4];
    transposta(matriz, transpost);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int soma = 0;
            for (int k = 0; k < 4; k++) {
                soma += matriz[i][k] * transpost[k][j];
            }
            vetor[i * 4 + j] = soma;
        }
    }
}

int main() {
    EstruturaMatrizesVetores estrutura;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &estrutura.matriz1[i][j]);
        }
    }

    int maior = encontrarMaiorElemento(estrutura.matriz1);

    transposta(estrutura.matriz1, estrutura.matriz2);
    multiplicarPorMaiorElemento(estrutura.matriz1, estrutura.matriz3, maior);
    matrizParaVetor(estrutura.matriz1, estrutura.vetor1);
    multiplicarPorTranspostaEArmazenar(estrutura.matriz1, estrutura.vetor2);

    // Impressão das matrizes e vetores resultantes
    printf("\nMatriz transposta:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", estrutura.matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz multiplicada pelo maior elemento (%d):\n", maior);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", estrutura.matriz3[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor sequencial da matriz:\n");
    for (int i = 0; i < 16; i++) {
        printf("%d ", estrutura.vetor1[i]);
    }

    printf("\n\nVetor resultado da multiplicacao da matriz por sua transposta:\n");
    for (int i = 0; i < 16; i++) {
        printf("%d ", estrutura.vetor2[i]);
    }

    printf("\n");

    return 0;
}
