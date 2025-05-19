#include <stdio.h>
#include <stdlib.h>
int somaElementos(int vetor[], int tam) {
    int soma = 0;

    for (int i = 0; i < tam; i++) {
        soma += vetor[i];
    }

    return soma;
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

    int soma = somaElementos(vetor, tam);

    printf("Soma dos elementos do vetor: %d\n", soma);

    return 0;
}

