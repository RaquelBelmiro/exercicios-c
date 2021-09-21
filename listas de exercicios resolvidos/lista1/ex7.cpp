/*Faça um programa C que leia os três lados de um triangulo e verifique se é um
triangulo e de que tipo (equilátero, isósceles, escaleno).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int lado1, lado2, lado3;

  printf("Digite os tres lados do triangulo: \n");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

  if ((lado1 == lado2) && (lado2 == lado3))
  {
    printf("Triangulo equilatero");
  }
  else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3))
  {
    printf("Triangulo isosceles");
  }
  else
    printf("Triangulo escaleno");

  printf("\n\n");
  system("pause");
  return 0;
}