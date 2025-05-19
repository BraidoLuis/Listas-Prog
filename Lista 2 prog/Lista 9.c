#include <stdio.h>

int main() {
    int n;
    int Tp = 0;
    int Ti = 0;
    int somaP = 0;
    int somaT = 0;

    printf("Digite uma sequência de números positivos (encerre com zero):\n");

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        somaT += n;

        if (n % 2 == 0) {
            Tp++;
            somaP += n;
        } else {
            Ti++;
        }
    }

    float mediaP = (float) somaP / Tp;
    float mediaG = (float) somaT / (Tp + Ti);

    printf("Quantidade de números pares: %d\n", Tp);
    printf("Quantidade de números ímpares: %d\n", Ti);
    printf("Média dos números pares: %.2f\n", mediaP);
    printf("Média geral: %.2f\n", mediaG);

    return 0;
}