#include <stdio.h>
#include <locale.h>

void imprimirId(int anoA, int anoN) {
    int id = anoA - anoN;
    printf("Idade: %d anos\n", id);
    
    if (id >= 0 && id <= 3){
        printf("Categoria: Bebê\n");
    }else if (id >= 4 && id <= 10) {
        printf("Categoria: Criança\n");
    }else if (id >= 11 && id <= 18) {
        printf("Categoria: Adolescente\n");
    }else if (id >= 19 && id <= 50){
        printf("Categoria: Adulto\n");
    }else{
        printf("Categoria: Idoso\n");
    }
    return;
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int ano, nas;
    printf("Digite o ano atual: ");
    scanf("%d", &ano);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &nas);
    imprimirId(ano, nas);
    return 0;
}
