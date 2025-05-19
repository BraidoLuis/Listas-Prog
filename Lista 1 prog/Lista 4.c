#include <stdio.h>
int main()
{
    float salB, ValH, salL;
    int Hrse;
    printf("Digte o salário bruto: ");
    scanf("%f", &salB);
    printf("Digite o valor das horas extras: ");
    scanf("%f", &ValH);
    printf("Digite a quantidade de horas extras: ");
    scanf("%d", &Hrse);
    
    
    salL = salB + ValH - (salB + ValH) * 0.08;
    
    printf("%f", salL);
    return 0;
}
