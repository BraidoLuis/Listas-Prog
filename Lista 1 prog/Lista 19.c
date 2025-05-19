#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
	float sali, sal, ret1, ret2, ret3, salt;
	
	printf("\nDigite o saldo inicial: ");
	scanf("%f", &sali);
	printf("\nDigite o seu salario: ");
	scanf("%f", &sal);
	
	salt = sali + sal;
	
	printf("Digite o valor da 1a retirada: ");
	scanf("%f", &ret1);
	printf("Digite o valor da 2a retirada: ");
	scanf("%f", &ret2);
	printf("Digite o valor da 3a retirada: ");
	scanf("%f", &ret3);
	
	printf("Extrato Bancario\n");
	printf("Saldo Inicial: R$ %.2f\n", sali);
	printf("Salario: %.2f\n", sal);
	printf("Saldo parcial: %.2f\n", salt);
	salt = salt - ret1;
	printf("1a retirada: %.2f\n", ret1);
	printf("Saldo parcial: %.2f\n", salt);
	salt = salt - ret2;
	printf("2a retirada: %.2f\n", ret2);
	printf("Saldo parcial: %.2f\n", salt);
	salt = salt - ret3;
	printf("3a retirada: %.2f\n", ret3);
	printf("Saldo parcial: %.2f\n", salt);
	return 0;
}

