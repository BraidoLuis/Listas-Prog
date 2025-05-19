#include <stdio.h>

float somatotal(int n) {
    float soma = 0.0;

    printf("Termos gerados:\n");

    for (int i = 1; i <= n; i++) {
        float n = 1.0 / i;
        soma += n;
        printf("1/%d = %.2f\n", i, n);
    }

    return soma;
}

int main() {
    int n;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &n);

    float result = somatotal(n);

    printf("Valor final da soma S = %.2f\n", result);

    return 0;
}

