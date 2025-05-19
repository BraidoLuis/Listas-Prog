#include <stdio.h>

int MaiorElemento(int vetor[], int tam) {
    int m = vetor[0];

    for (int i = 1; i < tam; i++) {
        if (vetor[i] > m) {
            m = vetor[i];
        }
    }

    return m;
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

    int maiorElemento = MaiorElemento(vetor, tam);

    printf("Maior elemento do vetor: %d\n", maiorElemento);

    return 0;
}
