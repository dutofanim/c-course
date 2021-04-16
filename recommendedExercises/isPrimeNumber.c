#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  int initialInterval = 0, endInterval = 0, intervalIndex = 0, testIndex = 0, divisors = 0;

  printf("Este programa identifica, em um intervalo fornecido, quais são os números primos.\nDigite o valor inicial e final do intervalo: ");
  scanf("%d %d",&initialInterval,&endInterval);

  while (initialInterval > endInterval) {
    printf("\nValor inicial é maior que o final.\nDigite o valor inicial e final do intervalo: ");
    scanf("%d %d",&initialInterval,&endInterval);
  }

  if (initialInterval >= 1) {
    for (intervalIndex = initialInterval; intervalIndex <= endInterval; intervalIndex += 1) {
      for (testIndex = 1; testIndex <= intervalIndex; testIndex += 1) {
        if (intervalIndex % testIndex == 0) {
          divisors += 1;
        }  
      }
      if (divisors == 2) {
        printf("%d é um número primo.\n", intervalIndex);
      }
      divisors = 0;
    }
  }
}