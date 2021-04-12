#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  float a = 0.0, b = 0.0;

  printf("Olá, este programa calcula a média entre dois números inteiros.\n");
  printf("Digite o primeiro número:\n");
  scanf("%f", &a);
  
  printf("Digite o segundo número:\n");
  scanf("%f", &b);

  printf("A média da doma dos valores %f e %f é: %f\n", a, b, (a + b) / 2);

  system("break");
}