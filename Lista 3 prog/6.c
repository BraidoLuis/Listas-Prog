#include <stdio.h>

#define MAX_N 10

// Função para verificar se a matriz é um quadrado mágico
int ehQuadradoMagico(int matriz[MAX_N][MAX_N], int n) {
    int somaEsperada = 0;
    // Calcula a soma esperada (a soma de qualquer linha, coluna ou diagonal) 
    for (int i = 0; i < n; i++) {
        somaEsperada += matriz[0][i];
    }

    // Verifica a soma de cada linha e coluna
    for (int i = 0; i < n; i++) {
        int somaLinha = 0;
        int somaColuna = 0;
        for (int j = 0; j < n; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        if (somaLinha != somaEsperada || somaColuna != somaEsperada) {
            return 0; // Não é um quadrado mágico
        }
    }

    // Verifica a soma da diagonal principal
    int somaDiagonalPrincipal = 0;
    for (int i = 0; i < n; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }
    if (somaDiagonalPrincipal != somaEsperada) {
        return 0; // Não é um quadrado mágico
    }

    // Verifica a soma da diagonal secundária
    int somaDiagonalSecundaria = 0;
    for (int i = 0; i < n; i++) {
        somaDiagonalSecundaria += matriz[i][n - 1 - i];
    }
    if (somaDiagonalSecundaria != somaEsperada) {
        return 0; // Não é um quadrado mágico
    }

    return 1; // É um quadrado mágico
}

int main() {
    int n;
    int matriz[MAX_N][MAX_N];

    printf("Digite a ordem da matriz quadrada (n): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (ehQuadradoMagico(matriz, n)) {
        printf("A matriz é um quadrado mágico.\n");
    } else {
        printf("A matriz não é um quadrado mágico.\n");
    }

    return 0;
}
