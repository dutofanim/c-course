#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int randomizedNumber();

int main()
{
  setlocale(LC_ALL, "");
  srand(time(0));

  int vectorLength, index;
  float vectorSumAverage = 0.0, *vector;

  printf("Este programa calcula a média da soma das posições de um vetor (valores gerados randomicamente). Primeiro defina o tamanho do vetor.\n");
  scanf("%d", &vectorLength);

  //Create a dynamic vector
  vector = (float *)malloc(vectorLength * sizeof(float));

  //Populate the vector with random numbers between MIN and MAX values
  for (index = 0; index < vectorLength; index += 1)
  {
    vector[index] = randomizedNumber(1, 1000);
    printf("\n%0.2f", vector[index]);
    vectorSumAverage += vector[index];
  }

  free(vector);

  printf("\nA média da soma dos valores do vetor é: %0.2f\n", vectorSumAverage / vectorLength);

  return 0;
}

int randomizedNumber(int lower, int upper)
{
  int randomNumber = 0;

  randomNumber = rand() % (upper + lower);
  return randomNumber;
}