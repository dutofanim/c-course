#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  int operation = 0, number1 = 0, number2 = 0;

  printf("Este programa faz operações matemáticas simples.\n");
  printf("Escolha a operação desejada:\n\n\
          1 = Soma\n\
          2 = Subtração\n\
          3 = Multiplicação\n\
          4 = Divisão\n\n");
  scanf("%d", &operation);

  printf("Por favor digite valor 1.\n");
  scanf("%d", &number1);

  printf("Por favor digite valor 2.\n");
  scanf("%d", &number2);

  switch(operation) {
    case 1:
      printf("A soma de %d e %d é: %d", number1, number2, (number1 + number2));
      break;
    case 2:
      printf("A subtração de %d e %d é: %d", number1, number2, (number1 - number2));
      break;
    case 3:
      printf("A multiplicação de %d e %d é: %d", number1, number2, (number1 + number2));
      break;
    case 4:
      printf("A divisão de %d e %d é: %d", number1, number2, (number1 / number2));
      break;
    default:
      printf("Operação selecionada é inválida.");
      break;
  }
}