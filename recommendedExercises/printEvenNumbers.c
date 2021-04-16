#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  int whileIndex = 0, doWhileIndex = 0, forIndex = 0, minInterval = 0,maxInterval = 0;

  printf("Este programa imprime os números pares de um intervalo fornecido.\nDigite o valor inicial e final do intervalo: ");
  scanf("%d %d", &minInterval, &maxInterval);

  while (minInterval > maxInterval) {
    printf("\nValor inicial é maior que o final.\nDigite o valor inicial e final do intervalo: ");
    scanf("%d %d", &minInterval, &maxInterval);
  }

  whileIndex = minInterval;
  doWhileIndex = minInterval;
  forIndex = minInterval;

  while (whileIndex <= maxInterval) {
    if (whileIndex % 2 == 0) {
      printf("%d\n", whileIndex);
    }
    whileIndex += 1;
  }

  do
  {
    if (doWhileIndex % 2 == 0) {
      printf("%d\n", doWhileIndex);
    }
    doWhileIndex += 1;
  } while (doWhileIndex <= maxInterval);

  for (forIndex = minInterval; forIndex <= maxInterval; forIndex += 1) {
    if (forIndex % 2 == 0) {
      printf("%d\n", forIndex);
    }
  } 
}