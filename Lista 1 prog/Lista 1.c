#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float soma(float n1, float n2){
    return n1 + n2;
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, s;
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	
	s = soma(n1,n2);
	
    printf("A soma é: %.2f", s);
    
    return 0;
}
