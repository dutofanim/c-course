#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  /*
    Enunciado
    Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.
    Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8.
  */

  int nNumber, iNumber, jNumber, index, multiI, multiJ;

  printf("Este programa imprime na tela os primeiros naturais (definidos pelo usuário) que são multiplos de 'i' ou 'j', também definidos pelo usuário.\n");
  printf("Digite a quantidade de números a serem impressos: ");
  scanf("%d", &nNumber);
  printf("Digite o primeiro número natural positivo diferente de zero: ");
  scanf("%d", &iNumber);
  printf("Digite o segundo número natural positivo diferente de zero: ");
  scanf("%d", &jNumber);

  multiI = multiJ = 0;

  for (index = 0; index < nNumber; index += 1)
  {
    if (multiI < multiJ)
    {
      printf(" %d", multiI);
      multiI += iNumber;
    }
    else if (multiI > multiJ)
    {
      printf(" %d", multiJ);
      multiJ += jNumber;
    }
    else
    {
      printf(" %d", multiI);
      multiI += iNumber;
      multiJ += jNumber;
    }
  }
}