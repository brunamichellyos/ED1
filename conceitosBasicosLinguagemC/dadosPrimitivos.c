
#include <stdio.h> //bliblioteca que permite acessar as funções de escrita e leitura (printf e o scanf)

//método principal
// execução programa

int main(){

    /*
    Criar um programa que 
    
     1 - declare variáveis dos tipos int, float, char, e double, 
     2 - inicialize-as com valores e 
     3 - imprima esses valores na tela.
    */

   // declaração variaveis
   int numero;
   float numeroComVirgula;
   char letra;
   double numeroComVirgulaGrande;

   // inicializando as variáveis
   numero = 45;
   numeroComVirgula = 14.89;   //O NÚMERO PRECISA SER REPRESENTADO COM (.) NO LUGAR DA (,)
   letra = 'B';
   numeroComVirgulaGrande = 1458.96;

   // impressão dos valores
    printf("Variável do tipo INT: %d\n", numero);
    printf("Variável do tipo FLOAT: %f\n", numeroComVirgula);
    printf("Variável do tipo CHAR: %c\n", letra);
    printf("Variável do tipo DOUBLE: %f\n", numeroComVirgulaGrande);

    printf("\n\n");

}