#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MIN = 0 

void main() {
  setlocale(LC_ALL,"");

  int whileIndex = 0, doWhileIndex = 0, forIndex = 0, maxIndex = 0;

  printf("Este programa faz uma contagem regressiva a partir de um número fornecido.\nDigite o valor inicial: ");
  scanf("%d", &maxIndex);

  whileIndex = maxIndex;
  doWhileIndex = maxIndex;
  forIndex = maxIndex;

  while (whileIndex >= 0) {
    printf("%d\n", whileIndex);
    whileIndex -= 1;
  }

  do
  {
    printf("%d\n", doWhileIndex);
    doWhileIndex -= 1;
  } while (doWhileIndex >= 0);

  for (forIndex = maxIndex; forIndex >= 0; forIndex -= 1) {
    printf("%d\n", forIndex);
  } 
}