/*5. Faça um programa C que leia dois números e imprima se são iguais ou diferentes.
Caso sejam diferentes, imprima o maior deles.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

  int numero1, numero2, maior;

  printf("\nDigite o 1° numero: ");
  scanf("%d", &numero1);

  printf("\nDigite o 2° numero: ");
  scanf("%d", &numero2);

  if (numero1==numero2)
    printf("\n Numeros Iguais");
  else
  {
    printf("\n numeros diferentes \n");
    if (numero1>numero2)
      printf("\n o numero %d e o maior", numero1);
    else
      printf("\n o numero %d e o maior", numero2);
  }

  printf("\n\n");
  system("pause");
  return 0;
}
