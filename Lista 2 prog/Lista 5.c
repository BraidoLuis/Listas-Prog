#include <stdio.h>

void divi(int n) {
    printf("Divisores de %d: ", n);
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return;
}

int main() {
    int n;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    divi(n);
    
    return 0;
}
