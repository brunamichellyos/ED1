#include <stdio.h>

int main() {
    int n, i;

    // Solicita ao usuário o número de elementos do vetor
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &n);

    // Declara o vetor com tamanho variável
    int vetor[n];

    // Inicializa o vetor com valores de 1 a n
    for (i = 0; i < n; i++) {
        vetor[i] = i + 1;
    }

    // Imprime os elementos do vetor na tela
    printf("Os elementos do vetor são:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
