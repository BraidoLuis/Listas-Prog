#include <stdio.h>

float Media(float vetor[], int tam) {
    float soma = 0.0;

    for (int i = 0; i < tam; i++) {
        soma += vetor[i];
    }

    return soma / tam;
}

int main() {
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    float vetor[tam];

    printf("Digite os valores do vetor:\n");

    for (int i = 0; i < tam; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    float media = Media(vetor, tam);

    printf("Media dos valores do vetor: %.2f\n", media);

    return 0;
}

