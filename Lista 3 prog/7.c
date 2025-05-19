#include <stdio.h>

// Função para calcular o Triângulo de Pascal de acordo com a Figura 1
void trianguloPascalFigura1(int n) {
    int triangulo[n][n];
    
    // Inicializa a primeira coluna com 1
    for (int i = 0; i < n; i++) {
        triangulo[i][0] = 1;
    }

    // Calcula os elementos restantes do Triângulo de Pascal
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
        }
    }

    // Imprime o Triângulo de Pascal de acordo com a Figura 1
    printf("Triângulo de Pascal (Figura 1):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangulo[i][j]);
        }
        printf("\n");
    }
}

// Função para calcular o Triângulo de Pascal de acordo com a Figura 2
void trianguloPascalFigura2(int n) {
    int triangulo[n][n];

    // Inicializa a primeira linha com 1
    for (int i = 0; i < n; i++) {
        triangulo[0][i] = 1;
    }

    // Calcula os elementos restantes do Triângulo de Pascal
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            triangulo[i][j] = triangulo[i - 1][j] + (j > 0 ? triangulo[i - 1][j - 1] : 0);
        }
    }

    // Imprime o Triângulo de Pascal de acordo com a Figura 2
    printf("Triângulo de Pascal (Figura 2):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%2d  ", triangulo[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite o número de linhas do Triângulo de Pascal: ");
    scanf("%d", &n);

    trianguloPascalFigura1(n);
    printf("\n");
    trianguloPascalFigura2(n);

    return 0;
}
