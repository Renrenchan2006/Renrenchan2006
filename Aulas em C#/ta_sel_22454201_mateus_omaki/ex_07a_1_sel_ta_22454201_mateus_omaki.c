/*Refaça o programa que calcule a média aritmética de um aluno que realizou duas avalia
ções. Além do valor da média, inclua na tela de saída uma das mensagens: “Aluno aprovado.” 
ou “Aluno reprovado.”. Considere que o aluno será aprovado com a média maior ou igual a cinco. 
alt1. Mostre o valor da média aritmética com duas casas decimais.
alt2.Altere a saída. Mostre a média e a mensagem na mesma linha:
	Média do aluno: x.xxx  Aluno aprovado ou Aluno reprovado.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void)
{
 float n1, n2, M;

 printf(". . . PROGRAMA MEDIA ARITMETICA DE PROVA . . .");
 printf("\nDigite a nota da primeira prova:  ");
 scanf("%f", &n1);
 printf("\nDigite a nota da segunda prova:  ");
 scanf("%f", &n2);
 M = (n1 + n2)/2;

 if (M < 6)
 printf("\nMedia do aluno: %.3f 	Aluno reprovado", M);
 if (M >= 6)
 printf("\nMedia do aluno: %.3f, 	Aluno aprovado", M);
  		
  	system("pause");
  	return 0;
}