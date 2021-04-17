#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

struct month {
  int dayNumber;
  int sellQuantity;
};

int randomizedNumber();

void main() {
  setlocale(LC_ALL,"");

  /*
    Enunciado:
     Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos.
     Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia.
  */

  struct month mes[31];
  struct month result[1];

  int monthDays, index, temp = 0;
  result[1].sellQuantity = 0;

  srand(time(0));

  for (monthDays = 0; monthDays < 31; monthDays += 1) {
    mes[monthDays].dayNumber = monthDays + 1;
    mes[monthDays].sellQuantity = randomizedNumber(1000);
    printf("Dia %d Vendas: %d\n", mes[monthDays].dayNumber, mes[monthDays].sellQuantity);
  }

  for (index = 0; index < 31; index += 1) {
    temp = mes[index].sellQuantity;
    if (temp > result[1].sellQuantity) {
      result[1].dayNumber = index + 1;
      result[1].sellQuantity = temp;
    }
  }

  printf("O dia %d foi o dia com a maior venda: %d discos\n", result[1].dayNumber, result[1].sellQuantity);
}

/*
Function Declaration
*/
int randomizedNumber(int upper) {
  int randomNumber = 0;

  randomNumber = rand() % (upper + 1);
  return randomNumber;
}