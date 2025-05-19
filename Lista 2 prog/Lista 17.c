#include <stdio.h>

int Indice(int vetor[], int tam, int x) {
    for (int i = 0; i < tam; i++) {
        if (vetor[i] == x) {
            return i;
        }
    }

    return -1;
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

    int valorBuscado;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valorBuscado);

    int indice = Indice(vetor, tam, valorBuscado);

    if (indice == -1) {
        printf("Valor nao encontrado no vetor.\n");
    } else {
        printf("Indice da primeira ocorrencia: %d\n", indice);
    }

    return 0;
}
