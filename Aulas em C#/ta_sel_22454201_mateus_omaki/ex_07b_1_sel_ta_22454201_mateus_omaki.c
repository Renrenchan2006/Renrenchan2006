/*Refaça o programa que calcule a média aritmética de um aluno que realizou duas avalia
ções. Além do valor da média, inclua na tela de saída uma das mensagens: “Aluno aprovado.” 
ou “Aluno reprovado.”. Considere que o aluno será aprovado com a média maior ou igual a cinco. 
alt3. Refaça-o considerando que a primeira prova tem peso três e a segunda, peso cinco. Ou 
seja, calcula a média ponderada do aluno.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void)
{
 float n1, n2, M;

 printf(". . . PROGRAMA MEDIA ARITMETICA DE PROVA . . .");
 printf("\nDigite a nota da primeira prova (PESO 3):  ");
 scanf("%f", &n1);
 printf("\nDigite a nota da segunda prova (PESO 5):  ");
 scanf("%f", &n2);
 M = (n1*3 + n2*5)/8;

 if (M < 6)
 printf("\nMedia do aluno: %.3f\nAluno reprovado", M);
 if (M >= 6)
 printf("\nMedia do aluno: %.3f\nAluno aprovado", M);
  		
  	system("pause");
  	return 0;
}