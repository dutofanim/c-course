#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "");

  /*
    Enunciado:
     Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e suas notas da primeira prova,
     determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0).
  */

  int whileIndex = 0, studentsNumber = 0, nota = 0, bigger = 0, smaller = 100;

  printf("Este programa recebe a quantidade de alunos de uma matéria e imprime na tela a maior e a menor nota.\n");
  printf("Digite o número de alunos da matéria: ");
  scanf("%d", &studentsNumber);

  while (whileIndex < studentsNumber) {
    printf("\nDigite a nota do aluno: ");
    scanf("%d",&nota);
    if (nota > smaller) {
      if (nota > bigger) {
        bigger = nota;
      }
    } else if (nota < smaller) {
      smaller = nota;
    }
    whileIndex += 1;
  }
  printf("\nA maior nota foi %d e a menor foi %d.\n", bigger, smaller);
}