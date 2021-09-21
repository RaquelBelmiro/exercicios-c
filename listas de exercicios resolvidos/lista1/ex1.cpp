/*1.Faça um programa em C que leia duas notas, calcule e imprima a média aritmética.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  float nota1,nota2, media;

  printf("\nDigite a nota1: ");
  scanf("%f",&nota1);

  printf("\nDigite a nota2: ");
  scanf("%f",&nota2);

  media=(nota1+nota2)/2;

  printf("\nMedia aritmetica do aluno: %.2f \n\n", media);

  system("pause");
  return 0;

}