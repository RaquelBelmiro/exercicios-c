#include <stdio.h>
#define L 7
#define C 9

void lerMatriz(float matriz[L][C]);
int verificaMatriz(float matriz[L][C]);

int main()
{
  float matriz[L][C], i, j;

  lerMatriz(matriz);

  printf("Sua funcao possui %d valor(es) maior(es) que 20 e menores ou iguais a 50\n", verificaMatriz(matriz));
  return 0;
}

void lerMatriz(float matriz[L][C])
{
  int i, j;
  for (i = 0; i < L; i++)
    for (j = 0; j < C; j++)
    {
      printf("A%d%d: ", i + 1, j + 1);
      scanf("%f", &matriz[i][j]);
    }
  printf("\n");

  //imprimindo os valores
  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
    {
      printf("%.2f\t", matriz[i][j]);
    }
    printf("\n");
  }
}

int verificaMatriz(float matriz[L][C])
{
  int i, j;

  int contaMaiores = 0;
  for (i = 0; i < L; i++)
    for (j = 0; j < C; j++)
      if (matriz[i][j] > 20 && matriz[i][j] <= 50)
        contaMaiores += 1;

  return contaMaiores;
}