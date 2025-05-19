#include <stdio.h>
#include <stdlib.h>

void somamult(int x, int y) {
    int soma = 0;
    int mult = 1;
    int cont = x;

    while (cont <= y) {
        if (cont % 2 == 0) {
            soma += cont;
        } else {
            mult *= cont;
        }
        cont++;
    }

    printf("A soma dos numeros pares no intervalo de %d a %d eh: %d\n", x, y, soma);
    printf("A multiplicacao dos numeros impares no intervalo de %d a %d eh: %d\n", x, y, mult);
}

int main() {
    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    if (x < y) {
        somamult(x, y);
    } else {
        printf("Erro: X deve ser maior que Y.\n");
    }

    return 0;
}

