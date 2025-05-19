#include <stdio.h>

void cal() {
    int v;
    int Vtotal = 0;
    int Vp = 0;
    int Vn = 0;
    int soma = 0;

    printf("Digite os valores (encerre com zero):\n");

    while (1) {
        scanf("%d", &v);
        
        if (v == 0) {
            break;
        }
        Vtotal++;
        soma += v;

        if (v > 0) {
            Vp++;
        } else {
            Vn++;
        }
    }

    float media = (float) soma / Vtotal;
    float percentP = (float) Vp / Vtotal * 100;
    float percentualN = (float) Vn / Vtotal * 100;

    printf("Média aritmética: %.2f\n", media);
    printf("Quantidade de valores positivos: %d\n",Vp);
    printf("Quantidade de valores negativos: %d\n", Vn);
    printf("Percentual de valores positivos: %.2f%%\n", percentP);
    printf("Percentual de valores negativos: %.2f%%\n", percentualN);
}

int main() {
    cal();

    return 0;
}
