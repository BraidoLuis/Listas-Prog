#include <stdio.h>
void remover(char str[], char c){
    int i, cont = 0;
    
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            str[i] = ' ';
        }
    }
    printf("string com os caracteres removidos: %s", str);
}
int main()
{
    char str[100], c;
    
    printf("Digite a string: ");
    fgets(str, 100, stdin);
    fflush(stdin);
    printf("Digite o caracter: ");
    scanf("%c", &c);
    
    remover(str, c);
    
    

    return 0;
}
