#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  int side1 = 0, side2 = 0, side3 = 0;

  printf("Este programa verifica se, com os valores informados pode-se montar um triângulo equilatero.\n");
  
  printf("Por favor digite valor do lado 1.\n");
  scanf("%d", &side1);

  printf("Por favor digite valor do lado 2.\n");
  scanf("%d", &side2);

  printf("Por favor digite valor do lado 3.\n");
  scanf("%d", &side3);

  if (side1 == side2 && side1 == side3) {
    printf("Os lados são iguais e portanto formam um triângulo equilatero .");
  } else {
    printf("Os lados não são iguais e não é possível formar um triângulo equilatero .");
  }
}