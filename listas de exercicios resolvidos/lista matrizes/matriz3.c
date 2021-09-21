#include <stdio.h>

#define TAM 5

void lerMatriz(int matriz[TAM][TAM]);
int verificaMatriz(int matriz[TAM][TAM], int x);

int main()
{
  int matriz[TAM][TAM], x;

  lerMatriz(matriz);

  printf("\nEntre com o numero que deseja pesquisar na matriz: ");
  scanf("%d", &x);

  if (verificaMatriz(matriz, x))
    printf("\nO numero %d pertence a matriz.\n\n", x);
  else
    printf("\nO numero %d NAO pertence a matriz.\n\n", x);

  return 0;
}

void lerMatriz(int matriz[TAM][TAM])
{
  int i, j;

  printf("\nEntre com os valores da matriz:\n\n");
  for (i = 0; i < TAM; i++)
  {
    for (j = 0; j < TAM; j++)
    {
      printf("A%d%d: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\n");

  //imprimindo os valores
  for (i = 0; i < TAM; i++)
  {
    for (j = 0; j < TAM; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
}

int verificaMatriz(int matriz[TAM][TAM], int x)
{
  int i, j;

  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
      if (matriz[i][j] == x)
        return 1;

  return 0;
}