#include <stdio.h>
#include <stdlib.h>

int Primo(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    if (Primo(n)) {
        printf("%d é um número primo.\n", n);
    } else {
        printf("%d não é um número primo.\n", n);
    }

    return 0;
}
