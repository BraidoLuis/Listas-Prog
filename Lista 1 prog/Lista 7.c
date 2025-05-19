#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int nota(int p1){
    if(p1>100){
	    printf("NOTA INVÁLIDA!");
	}
    else if(p1>=70 && p1<101){
        printf("APROVADO!");

    }
    else{
        printf("REPROVADO!");
    }
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1;
	printf("Digite a nota da prova: ");
	scanf("%d", &n1);
	nota(n1);
	return 0;
}
