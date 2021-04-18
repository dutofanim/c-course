#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  /*
    Enunciado
    Dado um inteiro não-negativo n, determinar n!
  */
  int number, index = 0, result = 1;

  printf("Este programa calcula o fatorial de um número fornecido.\n");
  printf("Digite um número: ");
  scanf("%d", &number);

  while (number < 0)
  {
    printf("O número digitado é negativo ou igual à zero.\nPor favor digite um número positivo maior que zero.");
    scanf("%d", &number);
  }

  for (index = number; index > 0; index -= 1)
  {
    result *= index;
  }

  printf("O fatorial de %d é: %d\n", number, result);
  return 0;
}