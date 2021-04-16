#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  /*
    Enunciado:
    Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.
  */

 int number, squareNum;

 printf("Este programa imprime na tela o quadrado de um número.\n");
 printf("Digite um número para saber seu quadrado: ");
 scanf("%d",&number);

 while (number != 0) {
   squareNum = number * number;
   printf("O quadrado de %d é %d.\n",number, squareNum);
   printf("Para sair digite zero. Digite um número para saber seu quadrado: ");
   scanf("%d",&number);
 }
}