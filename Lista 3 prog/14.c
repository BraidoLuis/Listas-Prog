#include <stdio.h>
void remover(char str[]){
    int i;
    
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != ' ')
            printf("%c-", str[i]);
    }
    
}
int main()
{
    char str[100];
    
    printf("Digite a string: ");
    fgets(str, 100, stdin);
    fflush(stdin);
    
    remover(str);
    
    return 0;
}