#include <stdio.h>
#include <locale.h>

float conta(int qw){
    float valor,valorf;
    valor = qw*0.46;
    valorf = valor + (valor*0.18);
    return valorf;
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int qw;
    float valor;
    printf("Digite a quantidade de quilowatts consumida: ");
    scanf("%d", &qw);
    valor = conta(qw);
    printf("O valor que deverá ser pago na conta é de: %f", valor);
    return 0;
}
