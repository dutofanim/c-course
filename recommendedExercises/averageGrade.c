#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL,"");

  float grade1 = 0, grade2 = 0, grade3 = 0, avgGrade = 0;

  printf("Este programa calcula a média de três notas.\n");
  
  printf("Por favor digite a nota 1.\n");
  scanf("%f", &grade1);

  printf("Por favor digite a nota 2.\n");
  scanf("%f", &grade2);

  printf("Por favor digite a nota 3.\n");
  scanf("%f", &grade3);

  avgGrade = (grade1 + grade2 + grade3) / 3;

  if (avgGrade > 7.0) {
    printf("A média do aluno foi %0.2f. Aluno aprovado.", avgGrade);
  } else {
    printf("A média do aluno foi %0.2f. Aluno reprovado.", avgGrade);
  }
}