#include <stdio.h>
#include <stdlib.h>
int fatorial(int n) {
    int fat = 1;

    for (int i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

void tabela(int n) {
    int val;

    printf("Digite %d números inteiros positivos:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &val);

        printf("%d %d %d %d\n", val, val * 2, val * val, fatorial(val));
    }
}

int main() {
    int n;
    printf("Digite a quantidade de números inteiros positivos: ");
    scanf("%d", &n);

    tabela(n);

    return 0;
}

