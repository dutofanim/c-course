#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  float a = 0.0, b = 0.0, result = 0.0;

  printf("Olá, este programa calcula a diferença entre duas notas.\n");
  printf("Digite a primeira nota:\n");
  scanf("%f", &a);
  
  printf("Digite o segunda nota:\n");
  scanf("%f", &b);
  result = a - b;
  printf("O valor absoluto da diferença entre os números é: %f\n", fabs(result));

  system("break");
}
