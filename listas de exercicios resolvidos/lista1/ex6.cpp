/*6. Faça um programa C que leia três números e os imprima ordenadamente, isto é,
primeiro, segundo, terceiro.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{

  int numero[TAM], i, j, aux;

  for (i = 0; i < TAM; i++)
  {
    printf("\nDigite o %d° numero: ", i + 1);
    scanf("%d", &numero[i]);
  }

  for (i = 1; i < TAM; i++)
  {
    for (j = 0; j < TAM - 1; j++)
    {
      if (numero[j] > numero[j + 1])
      {
        aux = numero[j];
        numero[j] = numero[j + 1];
        numero[j + 1] = aux;
      }
    }
  }

  printf("\nNumeros ordenados: ");
  for (i = 0; i < TAM; i++)
    printf(" %d ", numero[i]);

  printf("\n\n");
  system("pause");
  return 0;
}
