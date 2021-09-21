/*2. Faça um programa em C que leia duas notas, calcule a média e imprima a situação
do aluno (Aprovado, Reprovado). Considere que a média para aprovação é 5.0.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float nota1, nota2, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  media=(nota1+nota2)/2;

  if (media>=5.0)
    printf("Aluno aprovado");
  else
    printf("Aluno reprovado");


  printf("\n\n");
  system("pause");
  return 0;
}