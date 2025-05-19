#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float sal, fin, x;
    printf("Digite o valor do salário e do financiamento desejado: ");
    scanf("%f %f", &sal, &fin);
    
    x = sal * 5;
    
    if(fin <= x){
        printf("Financiamento concedido");
    }
    else{
        printf("Financiamento Negado");
    }
    return 0;
}
