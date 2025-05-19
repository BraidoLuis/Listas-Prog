#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float massa( float peso, float alt){
	float imc;
	imc = peso / (alt * alt);
	return imc;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
	float p, h, imc;
	
	printf("Digite o seu peso em kg: ");
	scanf("%f", &p);
	printf("Digite a sua altura em m: ");
	scanf("%f", &h);
	
	imc = massa(p, h);
	printf("\nValor do IMC: %f", imc);
	return 0;
}