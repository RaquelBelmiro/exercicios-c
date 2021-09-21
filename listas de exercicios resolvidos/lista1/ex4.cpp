/*4. Faça um programa C que leia três números e imprima o maior deles.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{
  int numero[TAM], i, maior;

  for (i = 0; i < TAM; i++)
  {
    printf("Digite o %d° numero: ", i + 1);
    scanf("%d", &numero[i]);
  }

  maior=numero[0];

  for(i=1;i<TAM;i++)
  {
    if(numero[i]>maior){
      maior=numero[i];
    }
  }

  printf("\n Maior numero: %d \n\n", maior);

  system("pause");
  return 0;
}
