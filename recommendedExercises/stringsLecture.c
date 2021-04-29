#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
  setlocale(LC_ALL, "");

  char word[500];

  printf("Digite qualquer palavra\n");
  setbuf(stdin, 0);
  fgets(word, 500, stdin);

  printf("\nPalavra digitada: %s\n", word);
  printf("\nQuantidade de letras: %d\n", strlen(word));
  printf("");

  word[strlen(word)-1] = '\0';
  printf("\nQuantidade de letras corrigida: %d\n", strlen(word));

  return 0;
}
