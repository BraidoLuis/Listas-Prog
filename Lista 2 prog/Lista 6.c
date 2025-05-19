#include <stdio.h>
#include <stdlib.h>
void mediaint(float a, float b) {
    float i = 0.0;
    int cont = 0;
    float val;

    printf("Digite uma sequencia de valores reais (encerre com valor negativo):\n");

    while (1) {
        scanf("%f", &val);

        if (val < 0) {
            break;
        }

        if (val >= a && val <= b) {
            i += val;
            cont++;
        }
    }

    if (cont > 0) {
        float media = i / cont;
        printf("A media dos valores no intervalo [%.2f, %.2f] eh: %.2f\n", a, b, media);
    } else {
        printf("Nenhum valor encontrado no intervalo [%.2f, %.2f].\n", a, b);
    }
}

int main() {
    float a, b;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    mediaint(a, b);

    return 0;
}
