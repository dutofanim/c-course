#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  printf("Olá\n");

  int a = 50;
  printf("Valor de a = %d\n", a);
  scanf("%d", &a);
  printf("Mudou o valor de a = %d\n", a);

  float b = 5.4;
  printf("Valor de b = %f\n", b);
  scanf("%f", &b);
  printf("Mudou o valor de b = %f\n", b);

  char letra = 'c';
  printf("Valor de letra = %c\n", letra);
  //fflush(stdin); //para limpar o lixo de memoria e ler a var de tipo char
  scanf("%c", &letra);
  printf("Mudou o valor de letter = %c\n", letra);

  system("pause");
}