#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[51];

    printf("Digite uma string (até 50 caracteres): ");
    scanf("%50s", str);

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}
