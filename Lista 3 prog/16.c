#include <stdio.h>
#include <string.h>

#define MAX_NOME_CANDIDATO 20

// Função para contar os votos de cada candidato
void contarVotos(int numAlunos) {
    char candidatos[4][MAX_NOME_CANDIDATO] = {"Gustavo", "Luis", "Carol", "Felipe"};
    int votos[4] = {0}; // Inicializa com zero votos para cada candidato

    for (int i = 0; i < numAlunos; i++) {
        char voto[MAX_NOME_CANDIDATO];
        printf("Digite o nome do candidato (Aluno %d): ", i + 1);
        scanf("%s", voto);

        // Verifica se o nome do candidato digitado corresponde a algum candidato
        int candidatoEncontrado = 0;
        for (int j = 0; j < 4; j++) {
            if (strcmp(voto, candidatos[j]) == 0) {
                votos[j]++;
                candidatoEncontrado = 1;
                break;
            }
        }

        // Se o candidato não foi encontrado, considera o voto como nulo
        if (!candidatoEncontrado) {
            printf("Voto nulo: %s\n", voto);
        }
    }

    // Exibe o número de votos de cada candidato
    printf("\nResultado da eleição:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: %d votos\n", candidatos[i], votos[i]);
    }
}

int main() {
    int numAlunos;

    printf("Digite o número de alunos presentes na eleição: ");
    scanf("%d", &numAlunos);

    contarVotos(numAlunos);

    return 0;
}
