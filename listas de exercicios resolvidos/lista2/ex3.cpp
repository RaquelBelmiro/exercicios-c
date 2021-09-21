/*3.Faça um programa na linguagem C que leia o nome, o telefone, os três últimos salários e exibe a seguintes informações:
Media dos Salários. Maior Salario. Menor Salario.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{

  char nome[20];
  int telefone, i;
  float salario[TAM], media, soma = 0, maior, menor;

  printf("\nDigite o nome: ");
  scanf(" %[^\n]s", nome);

  printf("Digite o telefone: ");
  scanf("%d", &telefone);

  printf("Digite os 3 ultimos salarios: \n");
  for (i = 0; i < TAM; i++)
  {
    printf("%d°: ", i + 1);
    scanf("%f", &salario[i]);
    soma += salario[i];
  }

  //media dos salarios

  media = soma / TAM;

  printf("\nMedia dos salarios: %.2f \n", media);

  //maior salario

  maior = salario[0];

  for (i = 1; i < TAM; i++)
  {
    if (salario[i] > maior)
      maior = salario[i];
  }

  printf("Maior salario: %.2f \n", maior);

  //menor salario

  menor = salario[0];

  for (i = 1; i < TAM; i++)
  {
    if (salario[i] < menor)
      menor = salario[i];
  }
  printf("Menor salario: %.2f \n\n", menor);

  system("pause");
  return 0;
}
