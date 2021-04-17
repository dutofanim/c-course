#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
  setlocale(LC_ALL,"");

  /*
    Enunciado:
     Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
     Exemplo: Para n=4 a saída deverá ser 1,3,5,7.
  */

 int index = 1, number = 0, sum = 1;

 printf("Este programa imprime na tela a quantidade de números ímpares, começando do 1, que o usuário informar.\n");
 printf("Digite um número inteiro positivo: ");
 scanf("%d",&number);

 while (number < 0) {
  printf("O número digitado foi menor que 0.\n");
  printf("Por favor digite um número inteiro positivo: ");
  scanf("%d",&number);
 }

 for (index = 0; index < number; index += 1) {
   printf("%d \n", sum);
   sum += 2;
 } 
}