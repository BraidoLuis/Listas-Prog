#include <stdio.h>
#include <string.h>

void completarStr(char strA[], char strB[], int t) 
{
    int tA = strlen(strA);
    int tB = strlen(strB);
    if (tA + tB >= t) 
	{
        int maxtB = t - tA - 1;
        strB[maxtB] = '\0';
    }
    
    strcat(strA, strB);
    printf("String completa: %s\n", strA);
}

int main() 
{
    int t = 0;
    printf("Digite o tamanho da sua string: \n");
    scanf("%d", &t);
    
    char strA[t];
    char strB[t];
    
    printf("Digite a sua string A: \n");
    scanf("%s", strA);
    
    printf("Digite a sua string B: \n");
    scanf("%s", strB);
    
    completarStr(strA, strB, t);
    
    return 0;
}
