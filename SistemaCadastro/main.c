#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar os dados de uma pessoa
typedef struct {
    char nome[50];
    int idade;
    char cpf[12];
} Pessoa;


// Função para adicionar um novo cadastro
Pessoa* adicionarCadastro(Pessoa* cadastros, int* tamanho, int* capacidade) {
    // TODO: Implementar a alocação dinâmica e o cadastro de uma nova pessoa
    return cadastros;
}

// Função para listar todos os cadastros
void listarCadastros(Pessoa* cadastros, int tamanho) {
    // TODO: Implementar a listagem dos cadastros
}

// Função para deletar um cadastro pelo índice
Pessoa* deletarCadastro(Pessoa* cadastros, int* tamanho, int* capacidade, int indice) {
    // TODO: Implementar a remoção de um cadastro e liberar a memória
    return cadastros;
}


int main() {
    Pessoa* cadastros = NULL; // Ponteiro para array dinâmico de cadastros
    int tamanho = 0;         // Número de cadastros atuais
    int capacidade = 0;      // Capacidade atual do array

    int opcao;
    do {
        printf("\n=== Sistema de Cadastro ===\n");
        printf("1. Adicionar Cadastro\n");
        printf("2. Listar Cadastros\n");
        printf("3. Deletar Cadastro\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastros = adicionarCadastro(cadastros, &tamanho, &capacidade);
                break;
            case 2:
                listarCadastros(cadastros, tamanho);
                break;
            case 3: {
                int indice;
                printf("Informe o indice do cadastro a deletar: ");
                scanf("%d", &indice);
                cadastros = deletarCadastro(cadastros, &tamanho, &capacidade, indice);
                break;
            }
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    // Liberar a memória alocada antes de sair
    free(cadastros);

    return 0;
}

