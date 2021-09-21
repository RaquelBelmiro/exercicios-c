/*3. Faça um programa em C que leia duas notas, calcule a média e imprima a avaliação
do aluno conforme critério abaixo:
Média < 5 ---> 'Fraco'
Media <= 5 ---> 'Regular'
Media <= 8 --> 'Bom'
Media > 8 ---> 'Excelente'*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float nota1, nota2, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  media = (nota1 + nota2) / 2;

  if (media < 5)
  {
    printf("Fraco\n\n");
  }
  else if (media <= 5)
  {
    printf("Regular\n\n");
  }
  else if (media <= 8)
  {
    printf("Bom");
  }
  else
    printf("Excelente");

  printf("\n\n");
  system("pause");
  return 0;
}