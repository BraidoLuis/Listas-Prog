#include <stdio.h>
#include <string.h>
void inverter(char str1[], char str2[], int k){
    int tam = strlen(str2);
    
    if (k > tam) 
	{
        k = tam;  
    }
    
    for (int i = 0; i < k; i++){
        str1[i] = str2[tam - 1];
        tam--;
    }
}
int main (){
    char str1[100], str2[100];
    int k;
    
    printf ("Digite a string: ");
    fgets (str2, 100, stdin);
    fflush (stdin);
    
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &k);
    
    inverter(str1, str2, k);
    
    printf("str1: %s", str1);
    
  return 0;
}
