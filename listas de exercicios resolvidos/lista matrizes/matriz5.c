#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 5
#define C 15

void geraMatriz(int matriz[L][C]);
void multiplicaMatriz(int matriz[L][C], int x, int resultado[L][C]);
void imprimeResultado(int resultado[L][C]);

int main()
{
  int matriz[L][C], resultado[L][C], x, i, j;
  srand(time(NULL));

  geraMatriz(matriz);

  printf("\nEntre com um numero para multiplica-lo pela matriz: ");
  scanf("%d", &x);
  printf("\n\nRealizando multiplicacao...\n");
  multiplicaMatriz(matriz, x, resultado);
  printf("\n\nA matriz resultante da operacao foi:\n\n");
  imprimeResultado(resultado);
  return 0;
}

void geraMatriz(int matriz[L][C])
{
  int i, j;
  for (i = 0; i < L; i++)
    for (j = 0; j < C; j++)
      matriz[i][j] = rand() % 30;

  //imprimindo matriz
  printf("\n\nMatriz original\n\n");
  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
}

void multiplicaMatriz(int matriz[L][C], int x, int resultado[L][C])
{
  int i, j;
  for (i = 0; i < L; i++)
    for (j = 0; j < C; j++)
      resultado[i][j] = matriz[i][j] * x;
}

void imprimeResultado(int resultado[L][C])
{
  int i, j;
  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
      printf("%d\t ", resultado[i][j]);
    printf("\n");
  }
  printf("\n");
}