#include <stdio.h>
#define L 5
#define C 3

void lerMatrizes(float matriz[L][C]);
void imprimeMatrizes(float matriz[L][C]);
void somaMatrizes(float matriz1[L][C], float matriz2[L][C], float resultado[L][C]);
void imprimeResultado(float matriz[L][C]);

int main()
{
  float matriz1[L][C], matriz2[L][C], resultado[L][C];
  int i, j;

  printf("\nEntre com os elementos da 1a matriz:\n\n");
  lerMatrizes(matriz1);

  printf("\n");

  printf("\nEntre com os elementos da 2a matriz:\n\n");
  lerMatrizes(matriz2);

  printf("\n Matriz 1 \n");
  imprimeMatrizes(matriz1);

  printf("\n");

  printf("\n Matriz 2 \n");
  imprimeMatrizes(matriz2);

  somaMatrizes(matriz1, matriz2, resultado);
  printf("\n\nA soma das duas matrizes resultou na matriz abaixo:\n");
  imprimeResultado(resultado);
  return 0;
}

void lerMatrizes(float matriz[L][C])
{
  int i, j;

  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
    {
      printf("E%d%d: ", i+1, j+1);
      scanf("%f", &matriz[i][j]);
    }
  }
}

void imprimeMatrizes(float matriz[L][C])
{
  int i, j;

  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
    {
      printf("%.2f\t", matriz[i][j]);
    }
    printf("\n");
  }
}

void somaMatrizes(float matriz1[L][C], float matriz2[L][C], float resultado[L][C])
{
  int i, j;
  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
    {
      resultado[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }
}

void imprimeResultado(float matriz[L][C])
{
  int i, j;
  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
      printf("%.2f ", matriz[i][j]);
    printf("\n");
  }
  printf("\n");
}