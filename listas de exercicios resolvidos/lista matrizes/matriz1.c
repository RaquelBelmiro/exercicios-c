#include <stdio.h>
#define L 5
#define C 4
void lerMatriz(float matriz[L][C]);
void imprimeMaior(float matriz[L][C]);

int main()
{
  float matriz[L][C];

  printf("\nEntre com os elementos da matriz:\n");

  lerMatriz(matriz);
  imprimeMaior(matriz);

  return 0;
}

void lerMatriz(float matriz[L][C])
{
  int i, j;

  for (i = 0; i < L; i++)

    for (j = 0; j < C; j++)
    {
      printf("\nA%d%d: ", i+1, j+1);
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

void imprimeMaior(float matriz[L][C])
{

  float maior;
  maior = matriz[0][0];
  int linha = 0, coluna = 0;
  int i, j;

  for (i = 0; i < L; i++)
  {

    for (j = 0; j < C; j++)
    {

      if (matriz[i][j] >= maior)
      {

        maior = matriz[i][j];
        linha = i+1;
        coluna = j+1;
      }
    }
  }
  printf("\n\nO maior valor da matriz foi: %.2f ", maior);
  printf("\n\nPosicoes: linha %d, coluna %d\n\n", linha, coluna);
}