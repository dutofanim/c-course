#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  float grade1 = 0, grade2 = 0, grade3 = 0, avgGrade = 0;

  printf("Este programa calcula a média de três notas.\n");
  printf("Por favor digite as notas.\n");

  scanf("%f %f %f", &grade1, &grade2, &grade3);
  avgGrade = (grade1 + grade2 + grade3) / 3;

  if (avgGrade > 7.0) {
    printf("Aluno aprovado.");
  } else {
    printf("Aluno reprovado.");
  }
}