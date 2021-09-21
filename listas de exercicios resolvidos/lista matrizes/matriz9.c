#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

void preencheMatriz(int matriz[TAM][TAM]);
void multiplicaMatrizes(int matA[TAM][TAM], int matB[TAM][TAM], int matRes[TAM][TAM]);
int verificaMatrizRes(int matRes[TAM][TAM]);

void imprimeMatriz(int matriz[TAM][TAM]);

int main()
{

  int matrizA[TAM][TAM], matrizB[TAM][TAM], matrizResultante[TAM][TAM];

  srand(time(NULL));

  printf("\n\nGerando a matriz A...\n\n");
  preencheMatriz(matrizA);
  printf("Gerando a matriz B...\n\n");
  preencheMatriz(matrizB);

  printf("Multiplicando (AxB)...\n\n");
  multiplicaMatrizes(matrizA, matrizB, matrizResultante);

  printf("\n\nmatriz A: \n\n");
  imprimeMatriz(matrizA);

  printf("\n\nmatriz B: \n\n");
  imprimeMatriz(matrizB);

  printf("\n\nmatriz resultante: \n\n");
  imprimeMatriz(matrizResultante);
  printf("\n\n");

  if (verificaMatrizRes(matrizResultante))
    printf("B E INVERSA DE A \n\n");
  else
    printf("B NAO E INVERSA DE A \n\n");

  return 0;
}

void preencheMatriz(int matriz[TAM][TAM])
{

  int i, j;

  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      matriz[i][j] = rand() % 10 + 1;
}

void multiplicaMatrizes(int matA[TAM][TAM], int matB[TAM][TAM], int matRes[TAM][TAM])
{

  int i, j, k;
  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
    {
      matRes[i][j] = 0;
      for (k = 0; k < TAM; k++)
        matRes[i][j] += matA[i][k] * matB[k][j];
    }
}

int verificaMatrizRes(int matRes[TAM][TAM])
{

  int i, j;

  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      if ((matRes[i][i] != 1) || ((i != j) && (matRes[i][j] != 0)))
        return 0;
  return 1;
}

void imprimeMatriz(int matriz[TAM][TAM])
{

  int i, j;

  for (i = 0; i < TAM; i++)
  {
    for (j = 0; j < TAM; j++)
      printf("%d\t", matriz[i][j]);
    printf("\n");
  }
}
