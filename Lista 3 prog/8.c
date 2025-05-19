#include <stdio.h>

int contacaracter(char str[], char c){
    int i, cont = 0;
    
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            cont++;
        }
    }
    return cont;
}
int main()
{
    char str[50], c;
    int x;
    
    printf("Digite uma string: ");
    fgets(str, 50, stdin);
    
    printf("Digite um caracter: ");
    scanf("%c", &c);
    
    x = contacaracter(str, c);
    
    printf("Número de vezes que o caracter aparece: %d", x);

    return 0;
}
