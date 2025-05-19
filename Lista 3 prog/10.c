/******************************************************************************
10. Escreva uma função que receba uma string e um caractere e retorne qual a última posição na
string em que o caractere aparece. Se o caracter não estiver na string, a função deve retornar -1. 
*******************************************************************************/
#include <stdio.h>

int pos(char str[], char c){
    int i, ifinal;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            ifinal = i;
        }
    }
    return ifinal + 1;
}
int main()
{
    char str[100];
    char c;
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    fflush(stdin);
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    int x = pos(str, c);
    
    printf("Ultima posicao que o caracter aparece na string = %d", x);

    return 0;
}
