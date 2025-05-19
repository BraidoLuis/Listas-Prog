#include <stdio.h>
#include <locale.h>

float media(float kmperc, float gascons) {
    if(gascons > 0){
        float media = kmperc / gascons;
        return media;
    }else{
        return 0.0;
    }
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    float km, gas;
    printf("Digite a quantidade de quilômetros rodados: ");
    scanf("%f", &km);
    printf("Digite a quantidade de combustível consumido: ");
    scanf("%f", &gas);
    float mediagas = media(km, gas);
    printf("Média de combustível: %.2f km/l\n", mediagas);
    return 0;
}
