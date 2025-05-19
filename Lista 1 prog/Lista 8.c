#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void ParImpar(int num){
    if (num % 2 == 0) {
        printf("%d é par\n", num);
    } 
    else{
        printf("%d é ímpar\n", num);
    }
    return;
}
int main() {
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    ParImpar(n);

    return 0;
}
