/*Refaça o programa que calcule a média aritmética de um aluno que realizou duas avalia
ções. Além do valor da média, inclua na tela de saída uma das mensagens: “Aluno aprovado.” 
ou “Aluno reprovado.”. Considere que o aluno será aprovado com a média maior ou igual a cinco. 
alt4. Deixe o programa mais interessante, permita que o usuário digite o valor dos pesos para 
usar no cálculo da média ponderada. */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void)
{
 float n1, n2, p1, p2, M;

 printf(". . . PROGRAMA MEDIA ARITMETICA DE PROVA . . .\n");
 printf("\nDigite a nota da primeira prova:  ");
 scanf("%f", &n1);
 printf("\nDigite o PESO da primeira prova:  ");
 scanf("%f", &p1);
 printf("\nDigite a nota da segunda prova:  ");
 scanf("%f", &n2);
 printf("\nDigite o PESO da segunda prova:  ");
 scanf("%f", &p2);
 
 M = (n1*p1 + n2*p2)/(p1 + p2);

 if (M < 6)
 printf("\nMedia do aluno: %.3f\nAluno reprovado", M);
 if (M >= 6)
 printf("\nMedia do aluno: %.3f\nAluno aprovado", M);
  		
  	system("pause");
  	return 0;
}