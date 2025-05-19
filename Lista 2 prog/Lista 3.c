#include <stdio.h>
#include <stdlib.h>

void multiplos(int n1, int n2, int x) {
    int mult = ((n1 + x - 1) / x) * x;
    
    for (int i = mult; i <= n2; i += x){
        printf("%d ", i);
    }
}

int main() {
    int n1, n2, x;
    
    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
    
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    multiplos(n1, n2, x);
    
    return 0;
}
