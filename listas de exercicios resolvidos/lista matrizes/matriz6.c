#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

void geraMatriz(int matriz[TAM][TAM]);
int verificaMatriz(int matriz[TAM][TAM]);

int main()
{
  int matriz[TAM][TAM], i, j;
  srand(time(NULL));

  geraMatriz(matriz);

  if (verificaMatriz(matriz) == 1)
    printf("\nMATRIZ SIMETRICA\n\n");
  else
    printf("\nMATRIZ NAO SIMETRICA\n\n");

  return 0;
}

void geraMatriz(int matriz[TAM][TAM])
{
  int i, j;
  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      matriz[i][j] = rand() % 50 + 1;

  //imprimindo matriz
  printf("\n\n\nMatriz: \n\n");
  for (i = 0; i < TAM; i++)
  {
    for (j = 0; j < TAM; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
}

int verificaMatriz(int matriz[TAM][TAM])
{
  int i, j;
  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      if (matriz[i][j] != matriz[j][i])
        return 0;
  return 1;
}