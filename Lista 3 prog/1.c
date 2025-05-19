#include <stdio.h>

// Função para imprimir uma matriz
void printMatrix(float matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%8.2f", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para transpor uma matriz
void transpose(float matriz1[4][4], float matriz2[4][4]) {
    printf("Matriz transposta:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz2[j][i] = matriz1[i][j];
        }
    }
    printMatrix(matriz2);
}

// Função para criar a matriz diagonal
void diagonal(float matriz1[4][4], float matriz2[4][4]) {
    printf("Matriz diagonal:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz2[i][j] = (i == j) ? matriz1[i][j] : 0;
        }
    }
    printMatrix(matriz2);
}

// Função para somar a matriz com ela mesma
void sum(float matriz1[4][4], float matriz2[4][4]) {
    printf("Matriz soma:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz2[i][j] = matriz1[i][j] + matriz1[i][j];
        }
    }
    printMatrix(matriz2);
}

// Função para calcular a média dos elementos da matriz
void average(float matriz1[4][4], float matriz2[4][4]) {
    printf("Matriz média:\n");
    for (int i = 0; i < 4; i++) {
        float soma = 0.0;
        for (int j = 0; j < 4; j++) {
            soma += matriz1[i][j];
        }
        matriz2[i][i] = soma / 4.0;
    }
    printMatrix(matriz2);
}

// Função para encontrar o maior e menor valor de cada linha e criar a matriz com eles
void maxMin(float matriz1[4][4], float matriz2[4][4]) {
    printf("Matriz com o maior e menor valor:\n");
    float maior, menor;
    for (int i = 0; i < 4; i++) {
        maior = matriz1[i][0];
        menor = matriz1[i][0];
        for (int j = 1; j < 4; j++) {
            if (matriz1[i][j] > maior) {
                maior = matriz1[i][j];
            }
            if (matriz1[i][j] < menor) {
                menor = matriz1[i][j];
            }
        }
        for (int j = 0; j < 4; j++) {
            matriz2[i][j] = (i % 2 == 0) ? maior : menor;
        }
    }
    printMatrix(matriz2);
}

// Função para encontrar e criar uma matriz com os valores acima da média da matriz1
void aboveAverage(float matriz1[4][4], float matriz2[4][4]) {
    printf("Matriz com valores acima da média:\n");
    float soma = 0.0;
    int cont = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            soma += matriz1[i][j];
            cont++;
        }
    }

    float media = soma / cont;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz2[i][j] = (matriz1[i][j] > media) ? matriz1[i][j] : 0.0;
        }
    }
    printMatrix(matriz2);
}

int main() {
    float matriz1[4][4];
    float matriz2[4][4];

    printf("Preencha a matriz 1:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("\nMatriz original:\n");
    printMatrix(matriz1);

    transpose(matriz1, matriz2);
    diagonal(matriz1, matriz2);
    sum(matriz1, matriz2);
    average(matriz1, matriz2);
    maxMin(matriz1, matriz2);
    aboveAverage(matriz1, matriz2);

    return 0;
}
