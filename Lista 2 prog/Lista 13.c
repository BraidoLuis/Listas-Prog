#include <stdio.h>

int contador(float vetor[], int tam) {
    int cont = 0;

    for (int i = 0; i < tam; i++) {
        if (vetor[i] < 0) {
            cont++;
        }
    }

    return cont;
}

int main() {
    int tam;
    float vetor[tam];
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    printf("Digite os valores do vetor:\n");

    for (int i = 0; i < tam; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    
    int negativos = contador(vetor, tam);
    printf("Quantidade de valores negativos: %d\n", negativos);

    return 0;
}

