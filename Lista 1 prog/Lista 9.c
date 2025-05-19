#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void TerminaComZero(int num){
    if (num % 10 == 0) {
        printf("Metade do número: %d\n", num / 2);
    } else {
        printf("O número digitado não termina com 0\n");
    }
    return;
}
int main() {
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    TerminaComZero(n);
    
    return 0;
}

