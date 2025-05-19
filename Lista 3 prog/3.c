#include <stdio.h>

typedef struct est_Data {
    int dia;
    int mes;
    int ano;
} Data;

int ehAnoBissexto(int ano) {
    return ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0);
}

int totalDias(Data data) {
    int totalDias = 0;
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    totalDias += (data.ano - 1) * 365;
    totalDias += (data.ano - 1) / 4 - (data.ano - 1) / 100 + (data.ano - 1) / 400;
    for (int i = 1; i < data.mes; i++) {
        totalDias += diasPorMes[i];
        if (i == 2 && ehAnoBissexto(data.ano)) {
            totalDias++;
        }
    }
    
    totalDias += data.dia;

    return totalDias;
}

int numeroDiasEntreDatas(Data data1, Data data2) {
    int dias1 = totalDias(data1);
    int dias2 = totalDias(data2);
    
    return (dias2 - dias1);
}

int main() {
    Data data1, data2;
    
    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    
    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);
    
    int numeroDias = numeroDiasEntreDatas(data1, data2);
    printf("O numero de dias entre as datas é: %d\n", numeroDias);
    
    return 0;
}
