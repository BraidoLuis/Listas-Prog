#include <stdio.h>
#include <stdlib.h>

void ordenar(int vetor[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];

    printf("Digite os valores do vetor:\n");

    for (int i = 0; i < tam; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    ordenar(vetor, tam);

    printf("Vetor ordenado: ");

    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}

