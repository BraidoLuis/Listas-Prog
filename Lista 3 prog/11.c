/******************************************************************************
11. Escreva uma função que retorne o número de espaços em branco contidos em uma string
passada como parâmetro. 
*******************************************************************************/
#include <stdio.h>
int embranco(char str[]){
    int i, cont = 0;
    
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            cont++;
        }
    }
    return cont;
}
int main()
{
    char str[100];
    int x;
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    
    x = embranco(str);
    
    printf("Numero de espaços em branco: %d", x);

    return 0;
}
