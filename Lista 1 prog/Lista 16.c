#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
	int cod;
	printf("Digite o codigo do seu cargo correspondente: ");
	scanf("%d", &cod);
	switch (cod){
		case 101:
			printf("\nVendedor");
			break;
		case 102:
			printf("\nAtendente");
			break;
		case 103:
			printf("\nAuxiliar Tecnico");
			break;
		case 104:
			printf("\nAssistente");
			break;
		case 105:
			printf("\nCoordenador de Grupo");
			break;
		case 106:
			printf("\nGerente");
			break;
		default:
			printf("\nCodigo Invalido!");
			break;
	}
	return 0;
}