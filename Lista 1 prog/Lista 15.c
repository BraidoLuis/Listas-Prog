#include <stdio.h>
#include <locale.h>
void media(float n1, float n2, float t, int f){
    float mediat;
    mediat = (n1*3)+(n2*5)+(t*2);
    if(f > 15){
        printf("Reprovado!");
    }
    else if(f <= 15 && mediat >= 70){
        printf("Aprovado!");
    }
    else if(mediat < 70){
        printf("O aluno deverá fazer prova final!");
    }
    return;
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    float p1, p2, t1;
    int fa;
    printf("Digite a nota da p1: ");
    scanf("%f", &p1);
    printf("Digite a nota da p2: ");
    scanf("%f", &p2);
    printf("Digite a nota do trabalho: ");
    scanf("%f", &t1);
    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%d", &fa);
    
    media(p1, p2, t1, fa);

    return 0;
}

