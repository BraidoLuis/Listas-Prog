#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 6
#define MAX_TITULO 50
#define MAX_AUTOR 30

typedef struct {
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int codigo;
    float preco;
} Livro;

// Função para fazer a busca por título ou parte do título
void buscarLivro(Livro livros[], int numLivros, char busca[]) {
    int encontrados = 0;

    for (int i = 0; i < numLivros; i++) {
        if (strstr(livros[i].titulo, busca) != NULL) {
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Código: %d\n", livros[i].codigo);
            printf("Preço: %.2f\n", livros[i].preco);
            printf("------------------------\n");
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum livro encontrado com o título '%s'.\n", busca);
    }
}

int main() {
    Livro livros[MAX_LIVROS];

    // Registro dos livros
    printf("Registro dos livros:\n");
    for (int i = 0; i < MAX_LIVROS; i++) {
        printf("\nLivro %d:\n", i + 1);
        printf("Título: ");
        fgets(livros[i].titulo, MAX_TITULO, stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0'; // Remover o caractere '\n' do final da string
        printf("Autor: ");
        fgets(livros[i].autor, MAX_AUTOR, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0'; // Remover o caractere '\n' do final da string
        printf("Código: ");
        scanf("%d", &livros[i].codigo);
        printf("Preço: ");
        scanf("%f", &livros[i].preco);
        getchar(); // Limpar o buffer do teclado após a leitura de float
    }

    // Busca de livros
    char busca[MAX_TITULO];
    printf("\nDigite o título (ou parte dele) do livro que deseja buscar: ");
    fgets(busca, MAX_TITULO, stdin);
    busca[strcspn(busca, "\n")] = '\0'; // Remover o caractere '\n' do final da string

    printf("\nResultados da busca:\n");
    buscarLivro(livros, MAX_LIVROS, busca);

    return 0;
}
