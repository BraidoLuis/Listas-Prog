#include <stdio.h>

float calmedia(int alunos) {
    float somaN = 0.0;
    float nota;
    
    for (int i = 1; i <= alunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        somaN += nota;
    }
    
    float media = somaN / alunos;
    return media;
}

int main() {
    int alunos;
    
    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &alunos);
    
    float media = calmedia(alunos);
    
    printf("A media das notas dos alunos foi de: %.2f\n", media);
    
    return 0;
}
