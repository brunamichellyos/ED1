
### **Atividade: Implementação de um Sistema de Cadastro Dinâmico em C**

**Objetivo:**  
Desenvolver um programa em C que utilize **alocação dinâmica de memória** e **ponteiros** para criar um sistema de cadastro simples. A atividade deve ser apresentada em um repositório Git com um `README.md` e um vídeo demonstrando o programa em execução.

---

### **Descrição do Problema**

Desenvolva um programa que funcione como um sistema básico de cadastro para armazenar informações de até **100 pessoas**. O sistema deve utilizar **alocação dinâmica de memória** para gerenciar os dados, sendo possível:  
1. Adicionar novos cadastros.  
2. Listar todos os cadastros.  
3. Deletar um cadastro existente.  

#### **Requisitos Funcionais**
- O programa deve armazenar as seguintes informações de cada pessoa:
  - Nome (string de até 50 caracteres).
  - Idade (inteiro).
  - CPF (string de 11 caracteres).  
- Use **malloc** ou **calloc** para alocar memória dinamicamente para o cadastro.
- Use **free** para liberar a memória ao deletar um cadastro.
- Implemente o menu com as seguintes opções:
  1. **Adicionar Cadastro:** Permitir que o usuário insira os dados de uma nova pessoa.
  2. **Listar Cadastros:** Exibir todos os cadastros armazenados.
  3. **Deletar Cadastro:** Remover uma pessoa específica pelo índice (posição na lista).
  4. **Sair:** Encerrar o programa, liberando toda a memória alocada.

---

### **Instruções de Desenvolvimento**

1. **Estrutura do Código**  
   - Utilize uma estrutura (`struct`) para armazenar os dados de cada pessoa.
   - Crie uma função para cada funcionalidade (ex.: adicionar, listar, deletar).
   - Trabalhe com um **ponteiro para um array dinâmico** para armazenar os cadastros.

2. **Uso de Ponteiros e Alocação Dinâmica**  
   - Use `malloc` ou `calloc` para criar o array de cadastros.
   - Redimensione o array, se necessário, para adicionar ou remover elementos.
   - Utilize `free` para liberar a memória dos cadastros deletados e no encerramento do programa.

---

### **Entrega**

1. **Repositório Git:**  
   - Inclua o código completo no repositório.
   - Adicione um arquivo `README.md` com:
     - **Descrição do problema:** Explicação da funcionalidade do programa.
     - **Como compilar e executar:** Passo a passo para rodar o programa.
     - Uma **captura de tela do programa em execução** (opcional, para enriquecer a documentação).

2. **Vídeo de Demonstração:**  
   - Grave um vídeo mostrando o programa em execução.
   - Explique brevemente como cada funcionalidade foi implementada.

3. **Link para o Repositório Git:**  
   - Compartilhar o link do repositório e do vídeo.

---

### **Critérios de Avaliação**
| Critério                                                       | Pontos |
|----------------------------------------------------------------|--------|
| Implementação das funcionalidades (adicionar, listar, deletar) | 5,0    |
| Uso correto de alocação dinâmica e ponteiros                   | 3,0    |
| Organização e clareza do código                                | 1,0    |
| README com descrição clara e detalhada                         | 1,0    |

---

### **Estrutura Base do Sistema de Cadastro em C**

```c
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

```
---

### **Descrição das Funções**
1. **`adicionarCadastro`**  
   - Verifica se há espaço disponível no array dinâmico.
   - Caso contrário, realoca a memória para aumentar a capacidade.
   - Solicita os dados da pessoa e armazena no array.

2. **`listarCadastros`**  
   - Itera sobre o array dinâmico e imprime os dados de cada pessoa.

3. **`deletarCadastro`**  
   - Remove o cadastro pelo índice informado pelo usuário.
   - Reorganiza os elementos do array (se necessário) e ajusta a capacidade.
---

### **Instruções para os Alunos**
1. Complete as funções `adicionarCadastro`, `listarCadastros` e `deletarCadastro` utilizando conceitos de **alocação dinâmica** com `malloc`, `realloc` e `free`.
2. Teste o programa com vários cadastros e remova alguns para verificar se a memória está sendo corretamente gerenciada.
3. Documente o código no `README.md` e grave um vídeo demonstrando a funcionalidade.

Se precisar de ajuda entre em contato comigo! 😊
