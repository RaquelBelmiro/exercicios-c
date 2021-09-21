#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 8

void preencheMatriz(int matriz[N][N]);
int verificaMatriz(int matriz[N][N]);

int main()
{
  int matriz[N][N];

  printf("\nGerando matriz 8x8 com numeros aleatorios...\n\n ");
  preencheMatriz(matriz);

  printf("\nVerificando a matriz gerada...\n\n");
  if (verificaMatriz(matriz))
    printf("\nMATRIZ TRIANGULAR INFERIOR \n\n");
  else
    printf("\nMATRIZ NAO TRIANGULAR INFERIOR \n\n");

  return 0;
}

void preencheMatriz(int matriz[N][N])
{

  int i, j;

  srand(time(NULL));

  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      matriz[i][j] = rand() % 14;

  //imprimindo matriz gerada

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
      printf("%d\t", matriz[i][j]);
    printf("\n");
  }
}

int verificaMatriz(int matriz[N][N])
{

  int i, j;

  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      if ((i < j) && (matriz[i][j] != 0))
        return 0;
  return 1;
}
