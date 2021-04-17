#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  /*
    Enunciado
    Dado uma seqüência de n números inteiros, determinar a soma dos números pares de 1 até n.
  */

  int number, evenSum = 0, whileIndex = 1;

  printf("Este programa soma todos os números pares de 1 até posição informada e imprime na tela o resultado.\n");
  printf("Digite o número desejado: ");
  scanf("%d", &number);

  while (whileIndex <= number)
  {
    if (whileIndex % 2 == 0)
    {
      evenSum = evenSum + whileIndex;
    }
    whileIndex += 1;
  }

  printf("A soma de todos os números pares do intervalo de 1 até %d foi: %d\n", number, evenSum);

  return 0;
}