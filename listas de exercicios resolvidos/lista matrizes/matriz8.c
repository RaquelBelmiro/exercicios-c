#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 15

void geraMatriz(int matriz[TAM][TAM]);
int verificaMatriz(int matriz[TAM][TAM]);

int main()
{
  int matriz[TAM][TAM], i, j;
  srand(time(NULL));

  geraMatriz(matriz);
  printf("\n\nmatriz gererada: \n\n");
  for (i = 0; i < TAM; i++)
  {
    for (j = 0; j < TAM; j++)
      printf("%d\t", matriz[i][j]);
      printf("\n");
  }
  printf("\n\nVerificando matriz...\n");
  if (verificaMatriz(matriz))
    printf("\nMATRIZ IDENTIDADE\n\n");
  else
    printf("\nMATRIZ NAO E IDENTIDADE\n\n");
  return 0;
}

void geraMatriz(int matriz[TAM][TAM])
{
  int i, j;
  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      matriz[i][j] = rand() % 20;
}

int verificaMatriz(int matriz[TAM][TAM])
{
  int i, j;
  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      if ((matriz[i][i] != 1) || ((i != j) && (matriz[i][j] != 0)))
        return 0;
  return 1;
}