#include <stdio.h>

void VetorPositivo(float vetor[], int tam) {
    int i;
    float val;

    for (i = 0; i < tam; i++) {
        printf("Digite um valor positivo: ");
        scanf("%f", &val);

        if (val < 0) {
            break;
        }

        vetor[i] = val;
    }
}

int main() {
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    float vetor[tam];

    VetorPositivo(vetor, tam);

    printf("Valores do vetor preenchidos com positivos:\n");

    for (int i = 0; i < tam; i++) {
        printf("%.2f ", vetor[i]);
    }

    printf("\n");

    return 0;
}
