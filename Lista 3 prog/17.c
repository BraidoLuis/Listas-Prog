#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 100
#define MAX_NOME 50
#define MAX_ENDERECO 100
#define MAX_TELEFONE 20
#define MAX_EMAIL 100

typedef struct {
    char nome[MAX_NOME];
    char endereco[MAX_ENDERECO];
    char telefone[MAX_TELEFONE];
    char email[MAX_EMAIL];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    int anoChegadaEmpresa;
} Funcionario;

int main() {
    int numFuncionarios;
    Funcionario funcionarios[MAX_FUNCIONARIOS];

    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &numFuncionarios);
    getchar(); // Limpar o buffer do teclado após a leitura de int

    // Cadastro dos funcionários
    for (int i = 0; i < numFuncionarios; i++) {
        printf("\nFuncionário %d:\n", i + 1);
        printf("Nome: ");
        fgets(funcionarios[i].nome, MAX_NOME, stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = '\0'; // Remover o caractere '\n' do final da string
        printf("Endereço: ");
        fgets(funcionarios[i].endereco, MAX_ENDERECO, stdin);
        funcionarios[i].endereco[strcspn(funcionarios[i].endereco, "\n")] = '\0'; // Remover o caractere '\n' do final da string
        printf("Telefone: ");
        fgets(funcionarios[i].telefone, MAX_TELEFONE, stdin);
        funcionarios[i].telefone[strcspn(funcionarios[i].telefone, "\n")] = '\0'; // Remover o caractere '\n' do final da string
        printf("E-mail: ");
        fgets(funcionarios[i].email, MAX_EMAIL, stdin);
        funcionarios[i].email[strcspn(funcionarios[i].email, "\n")] = '\0'; // Remover o caractere '\n' do final da string
        printf("Dia de nascimento: ");
        scanf("%d", &funcionarios[i].diaNascimento);
        printf("Mês de nascimento: ");
        scanf("%d", &funcionarios[i].mesNascimento);
        printf("Ano de nascimento: ");
        scanf("%d", &funcionarios[i].anoNascimento);
        printf("Ano de chegada à empresa: ");
        scanf("%d", &funcionarios[i].anoChegadaEmpresa);
        getchar(); // Limpar o buffer do teclado após a leitura de int
    }

    // Imprimir os dias de nascimento dos funcionários nascidos em um mês desejado
    int mesDesejado;
    printf("\nDigite o mês desejado (1 a 12): ");
    scanf("%d", &mesDesejado);

    printf("\nFuncionários nascidos no mês %d:\n", mesDesejado);
    for (int i = 0; i < numFuncionarios; i++) {
        if (funcionarios[i].mesNascimento == mesDesejado) {
            printf("%s - Dia %d\n", funcionarios[i].nome, funcionarios[i].diaNascimento);
        }
    }

    // Imprimir o nome e o telefone dos funcionários com uma quantidade específica de anos de empresa
    int anosEmpresaDesejados;
    printf("\nDigite a quantidade de anos de empresa desejados: ");
    scanf("%d", &anosEmpresaDesejados);

    printf("\nFuncionários com %d anos de empresa:\n", anosEmpresaDesejados);
    for (int i = 0; i < numFuncionarios; i++) {
        int anosEmpresa = 2023 - funcionarios[i].anoChegadaEmpresa; // 2023 é o ano atual
        if (anosEmpresa == anosEmpresaDesejados) {
            printf("%s - Telefone: %s\n", funcionarios[i].nome, funcionarios[i].telefone);
        }
    }

    return 0;
}
