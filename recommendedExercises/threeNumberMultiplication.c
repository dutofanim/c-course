#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  int number1 = 0, number2 = 0, number3 = 0, result = 0;

  printf("Olá, multiplica três números.\n");
  printf("Digite os três números separados por espaço:\n");
  scanf("%d %d %d", &number1, &number2, &number3);
  result = number1 * number2 * number3;
  printf("A multiplicação dos números %d * %d * %d é: %d\n", number1, number2, number3, result);
  system("break");
}
