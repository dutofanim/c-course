#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  int operation = 0;
  float number1 = 0, number2 = 0;

  printf("Este programa faz operações matemáticas simples.\n");

  printf("Por favor digite valor 1.\n");
  scanf("%f", &number1);

  printf("Por favor digite valor 2.\n");
  scanf("%f", &number2);

  printf("Escolha a operação desejada:\n\n\
          1 = Soma\n\
          2 = Subtração\n\
          3 = Multiplicação\n\
          4 = Divisão\n\n");
  scanf("%d", &operation);

  switch(operation) {
    case 1:
      printf("\nA soma de %0.2f e %0.2f é: %0.2f", number1, number2, (number1 + number2));
      break;
    case 2:
      printf("\nA subtração de %0.2f e %0.2f é: %0.2f", number1, number2, (number1 - number2));
      break;
    case 3:
      printf("\nA multiplicação de %0.2f e %0.2f é: %0.2f", number1, number2, (number1 * number2));
      break;
    case 4:
      printf("\nA divisão de %0.2f e %0.2f é: %0.2f", number1, number2, (number1 / number2));
      break;
    default:
      printf("\nOperação selecionada é inválida.");
      break;
  }
}