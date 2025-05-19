#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Números de 1000 a 1999 que divididos por 11 dão resto igual a 5:\n");
    
    for (int n = 1000; n <= 1999; n++) {
        if (n % 11 == 5) {
            printf("%d\n", n);
        }
    }
    
    return 0;
}
