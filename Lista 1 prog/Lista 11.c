#include <stdio.h>
float sal(float salatual, int t){
    if(t <= 12){
        return salatual * 1.1;
    }
    else{
        return salatual * 1.2;
    }
}
int main()
{
    float salat, saln;
    int tm;
    printf("Digite o salario atual do funcionário: ");
    scanf("%f", &salat);
    printf("Digite o tempo de serviço do funcionário em meses: ");
    scanf("%d", &tm);
    saln = sal(salat, tm);
    printf("O novo salário do funcionário é de: %.2f", saln);

    return 0;
}
