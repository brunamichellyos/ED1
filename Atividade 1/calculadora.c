/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>  // importação da biblioteca...

// Declaração de funções
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Adição: %.2lf\n", add(num1, num2));
    printf("Subtração: %.2lf\n", subtract(num1, num2));
    printf("Multiplicação: %.2lf\n", multiply(num1, num2));
    printf("Divisão: %.2lf\n", divide(num1, num2));

    return 0;
}

// Implementação da função de adição
double add(double a, double b) {
    return a + b;
}

// Implementação da função de subtração
double subtract(double a, double b) {
    return a - b;
}

// Implementação da função de multiplicação
double multiply(double a, double b) {
    return a * b;
}

// Implementação da função de divisão
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0.0; // Retorna zero se b é zero para evitar divisão por zero
    }
}
