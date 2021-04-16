#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  /*
    Enunciado:
    Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
  */

 int index = 1, number = 0, sum = 0;

 printf("Este programa calcular a soma dos n primeiros números inteiros positivos e imprime na tela.\n");
 printf("Digite um número inteiro positivo: ");
 scanf("%d",&number);

 if (number < 0) {
   printf("Digite um número inteiro positivo maior que zero na próxima execução.");
   system("break");
 } else {
   while (index <= number) {
   sum += index;
   index += 1;
  }
 }

 printf("A soma total do intervalo de 1 à %d é: %d\n", number, sum);
}