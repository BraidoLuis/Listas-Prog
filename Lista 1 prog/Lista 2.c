#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float sal(float salA, float salP){
    return salA * (salP/100);
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float Satual, Snovo, s, n;
    
    printf("Digite o salário do funcionario: ");
    scanf("%f", &Satual);
    printf("Digite a porcentagem de aumento do salário do funcionário: ");
    scanf("%f", &Snovo);
    s = sal(Satual, Snovo);
    n = s+Satual;
    printf("O funcionário teve um aumento de: %.2f no salário atual dele, e seu novo salário é de: %.2f", s, n);
    
    return 0;
}