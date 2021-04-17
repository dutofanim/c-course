#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");

  /*
    Enunciado:
     Dados um inteiro x e um inteiro não-negativo n, calcular x^n.
  */

 int numberX = 0, number = 0, result = 1, counter = 0;

 printf("Este programa imprime na tela o resultado da exponenciação de dois números fornecidos.\n");
 printf("Digite um número inteiro: ");
 scanf("%d",&numberX);
 printf("Digite um número inteiro positivo: ");
 scanf("%d",&number);

 while (number < 0) {
  printf("O número digitado foi menor que 0.\n");
  printf("Por favor digite um número inteiro positivo: ");
  scanf("%d",&number);
 }

 while (counter != number) {
   result *= numberX;
   counter += 1;
 }

 printf("O resultado de %d elevado a %d é: %d\n", numberX, number, result);
}