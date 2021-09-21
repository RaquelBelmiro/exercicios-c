/*2.Faça  um  programa  na  linguagem  C  que  leia  o  nome,  sexo  e  ano  de  nascimento  de  uma pessoa e exibe as seguintes informações: Idade da pessoa, Classificação Etária da pessoa, de acordo com o seguinte critério: 
Idade até 25 anos –Jovem Adulto.
Idade até 45 anos –Adultos.
Idade até 55 anos –Adulto Experiente.
Idade até 65 anos –Adultos Sênior.
Idade > 65 –Vovô 
Se o sexo = 'M' ou 'm'/Vovó –Se o sexo = 'F' ou 'f*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  char nome[20], sexo;
  int anoNascimento, anoAtual, idade;

  anoAtual=2021;

  printf("\nDigite o nome: ");
  scanf(" %[^\n]s", nome);

  printf("\nDigite o sexo ['f' ou 'm']: ");
  scanf(" %c", &sexo);

  printf("\nDigite o ano de nascimento: ");
  scanf("%d", &anoNascimento);

  idade=anoAtual-anoNascimento;

  printf("\nidade: %d", idade);

  if ((idade>=18) && (idade<=25))
    printf("\nJovem adulto\n");
  else if ((idade > 25) && (idade <= 45))
    printf("\nAdulto\n");
  else if ((idade > 45) && (idade <= 55))
    printf("\nAdulto experiente\n");
  else if ((idade > 55) && (idade <= 65))
    printf("\nAdulto senior\n");
  if(idade>65)
    {
      if((sexo=='f')||(sexo=='F'))
        printf("\n vóvó");
      else if((sexo=='m')||(sexo=='M'))
        printf("vôvô");
    }
  
  printf("\n\n");
  system("pause");
  return 0;
}
