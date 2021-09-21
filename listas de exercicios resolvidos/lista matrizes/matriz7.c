#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 4
#define C 9

void geraMatriz(int matriz[L][C]);
void calculaTransposta(int matriz[L][C], int transposta[C][L]);
void imprimeTransposta(int transposta[C][L]);

int main()
{
  int matriz[L][C], transposta[C][L], i, j;
  srand(time(NULL));

  geraMatriz(matriz);

  printf("\n\nRealizando transposicao da matriz...\n");
  calculaTransposta(matriz, transposta);
  printf("\n\nA matriz transposta gerada foi:\n\n");
  imprimeTransposta(transposta);
  return 0;
}

void geraMatriz(int matriz[L][C])
{
  int i, j;
  for (i = 0; i < L; i++)
    for (j = 0; j < C; j++)
      matriz[i][j] = rand() % 25 + 1;

  //imprimindo matriz
  printf("\n\n\nMatriz: \n\n");
  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
}

void calculaTransposta(int matriz[L][C], int transposta[C][L])
{
  int i, j;
  for (i = 0; i < C; i++)
    for (j = 0; j < L; j++)
      transposta[i][j] = matriz[j][i];
}

void imprimeTransposta(int transposta[C][L])
{
  int i, j;
  for (i = 0; i < C; i++)
  {
    for (j = 0; j < L; j++)
      printf("%d\t", transposta[i][j]);
    printf("\n");
  }
  printf("\n");
}