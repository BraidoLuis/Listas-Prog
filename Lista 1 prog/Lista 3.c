#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int conv(int h){
    return h*60;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
    int hrs, min;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &hrs);
    
    min = conv(hrs);
    
    printf("%d horas equivalem à %d minutos", hrs, min);
    
    return 0;
}