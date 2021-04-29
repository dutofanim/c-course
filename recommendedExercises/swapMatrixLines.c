#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
  setlocale(LC_ALL, "");

  int matrix[2][2], index, jIndex, swap = 0;

  printf("Digite os valores da matriz:\n");

  for (index = 0; index < 2; index += 1)
  {
    for (jIndex = 0; jIndex < 2; jIndex += 1)
    {
      printf("\nmatrix[%d, %d] = ", index, jIndex);
      scanf("%d", &matrix[index][jIndex]);
    };
  };

  printf("\n");
  printf("Original matrix:[%d, %d]\n", matrix[0][0], matrix[0][1]);
  printf("                [%d, %d]\n", matrix[1][0], matrix[1][1]);

  index = 0;

  for (jIndex = 0; jIndex < 2; jIndex += 1)
  {
    swap = matrix[index][jIndex];
    matrix[index][jIndex] = matrix[index + 1][jIndex];
    matrix[index + 1][jIndex] = swap;
  };

  printf("\n");
  printf("Matrix with swapped lines:[%d, %d]\n", matrix[0][0], matrix[0][1]);
  printf("                     [%d, %d]\n", matrix[1][0], matrix[1][1]);

  return 0;
}
