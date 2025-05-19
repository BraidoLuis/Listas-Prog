#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void Sinal(float num) {
    if (num > 0) {
        printf("O número é positivo\n");
    } else if (num < 0) {
        printf("O número é negativo\n");
    } else {
        printf("O número é neutro (zero)\n");
    }
    return;
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    float n;
    printf("Digite um número real: ");
    scanf("%f", &n);

    Sinal(n);

    return 0;
}

