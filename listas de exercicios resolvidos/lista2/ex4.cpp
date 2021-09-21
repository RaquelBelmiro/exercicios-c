/*4.Faça  um  programa  na  linguagem  C  que  leia  os  dados  da  ficha  de  matricula  de  um  novo aluno conforme abaixo:
Nome.
Idade (18 a 99 anos).
Grau de Instrução (1 –2o grau, 2 –Superior, 3 –Pós-graduado). 
Código  do  curso  (1 –Ciência  da  Computação,  2 –Engenharia,  3 –Matemática,  4 –Marketing e 5 –Direito ).
Valor da mensalidade.
Percentual de desconto (0 a 100).

Com  base  nestas  informações  calcule  a  mensalidade  com  desconto  e  exiba  as  informações abaixo:
Valor da Mensalidade com Desconto. Nome do Curso. Situação do Aluno (Aluno Especial ou Aluno Comum).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  char nome[20];
  int idade, grauInstrucao, codigoCurso, percentualDesconto;
  float valorMensalidade, valorMensalidade_comDesconto;

  printf("\nDigite o nome do novo aluno: ");
  scanf("%[^\n]s", nome);
  do
  {
    printf("Digite a idade do novo aluno (18 a 99): ");
    scanf("%d", &idade);
  } while ((idade < 18) || (idade > 99));

  do
  {
    printf("Digite o numero correspondente ao grau de instrucao do aluno: 1- 2o grau, 2- Superior, 3- Pós-graduado: ");
    scanf("%d", &grauInstrucao);
  } while ((grauInstrucao < 1) || (grauInstrucao > 3));

  do
  {
    printf("\n\nDigite o numero correspondente ao codigo do curso do aluno");
    printf("\n1- Ciencia  da  Computacao,  2- Engenharia, 3- Matematica,  4- Marketing ou 5- Direito: ");
    scanf("%d", &codigoCurso);
  } while ((codigoCurso < 1) || (codigoCurso > 5));

  printf("\nDigite o valor da mensalidade do aluno: ");
  scanf("%f", &valorMensalidade);

  do
  {
    printf("Digite o percentual de desconto da mensalidade do aluno (0 a 100): ");
    scanf("%d", &percentualDesconto);
  } while ((percentualDesconto < 0) || (percentualDesconto > 100));

  valorMensalidade_comDesconto = valorMensalidade - ((valorMensalidade * percentualDesconto) / 100);

  printf("\nValor da mensalidade com desconto: %.2f", valorMensalidade_comDesconto);

  printf("\nNome do curso: ");
  switch (codigoCurso)
  {
  case 1:
    printf("Ciencia  da  Computação");
    break;

  case 2:
    printf("Engenharia");
    break;
  case 3:
    printf("Matematica");
    break;
  case 4:
    printf("Marketing");
    break;
  case 5:
    printf("Direito");
    break;
  }

  if(percentualDesconto>80)
    printf("\nAluno especial");
  else
    printf("\nAluno Comum");

  printf("\n\n");
  system("pause");
  return 0;
}