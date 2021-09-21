/*1. Faça um programa na linguagem C que leia o nome, idade, sexo e a mensalidade de dois
alunos e exiba as seguintes informações:

-Quem é o mais velho?
-Quem paga a mensalidade mais barata?
-Informe "HOMEM" quando o sexo for 'm'; e "MULHER" quando o sexo for 'f'
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

  char nome1[20], nome2[20], sexo1, sexo2;
  int idade1, idade2;
  float mensalidade1, mensalidade2;

   printf("\n--Informações do 1° aluno--");

  printf("\nNome: ");
  scanf(" %[^\n]s", nome1);

  printf("Sexo ['f' ou 'm']: ");
  scanf(" %c",&sexo1);

  printf("Idade: ");
  scanf(" %d",&idade1);

  printf("Mensalidade: ");
  scanf(" %f", &mensalidade1);

  printf("\n--Informações do 2° aluno--");

  printf("\nNome: ");
  scanf(" %[^\n]s", nome2);

  printf("Sexo ['f' ou 'm']: ");
  scanf(" %c", &sexo2);

  printf("Idade: ");
  scanf(" %d",&idade2);

  printf("Mensalidade: ");
  scanf(" %f", &mensalidade2);

  //Mais velho
 
  if(idade1>idade2)
  {
    printf("\n Aluno mais velho: %s \n", nome1);
  }
  else if(idade2>idade1)
  {
    printf("\n Aluno mais velho: %s \n", nome2);
  }
  else
    printf("\n Alunos com idades iguais\n");

  //mensalidade mais barata

  if (mensalidade1<mensalidade2)
  {
    printf(" Aluno que paga a mensalidade mais barata: %s \n", nome1);
  }
  else if(mensalidade2<mensalidade1)
  {
    printf(" Aluno que paga a mensalidade mais barata: %s \n", nome2);
  }
  else
    printf(" Alunos com mensalidades iguais\n");

  //homem ou mulher

  if(sexo1=='f')
  {
    printf("\n %s - sexo: MULHER \n", nome1);
  }
  else
    printf("\n %s - sexo: HOMEM \n", nome1);

  if(sexo2=='f')
  {
    printf(" %s - sexo: MULHER \n\n", nome2);
  }
  else
    printf(" %s - sexo: HOMEM \n\n", nome2);



  system("pause");
  return 0;
}