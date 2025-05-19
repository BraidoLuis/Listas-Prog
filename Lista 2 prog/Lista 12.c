#include <stdio.h>

float calpi(int N) {
    float pi = 0.0;
    int s = 1;

    printf("Termos utilizados:\n");

    for (int i = 0; i < N; i++) {
        int d = 2 * i + 1;
        float n = 1.0 / d * s;
        pi += n;

        if (s == 1) {
            printf("1/%d ", d);
        } else {
            printf("- 1/%d ", d);
        }

        s *= -1;
    }

    printf("\n");

    return 4 * pi;
}

int main() {
    int n;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &n);

    float result = calpi(n);

    printf("Valor aproximado de PI = %.6f\n", result);

    return 0;
}
