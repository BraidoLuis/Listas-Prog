#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void calcod(int cod, float num1, float num2){
	switch (cod){
		case 1:
			printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
			break;
		case 2:
			printf("%.2f x %.2f = %.2f", num1, num2, num1*num2);
			break;
		case 3:
			printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
			break;
		default:
			printf("Codigo Invalido!");
	}
}
int main(){
    setlocale(LC_ALL,"Portuguese");
	float n1, n2;
	int cod;
	
	printf("Digite dois numeros: \n");
	scanf("%f %f", &n1, &n2);
	
	printf("\nDigite o codigo para realizar algumas operacoes");
	printf("\n1 -> faz o programa adicionar os dois numeros");
	printf("\n2 -> Multiplica os numeros");
	printf("\n3 -> O primeiro numero vai ser dividido pelo segundo");
	printf("\n\nInforme o codigo: ");
	scanf("%d", &cod);
	
	calcod(cod, n1, n2);
	
	return 0;
}
