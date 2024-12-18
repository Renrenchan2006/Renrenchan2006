/* Nota A e Nota B
A + B = Média
Média >= 7
if aprovado
else reprovado*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main (void)
{
	float A, B, M;
printf(". .TABELA DE APROVACAO. .");
printf("\n\nDigite (de 0 a 10) sua nota A:  ");
scanf("%f", &A);
printf("\n\nDigite (de 0 a 10) sua nota B:  ");
scanf("%f", &B);
M = (A + B)/2;
printf("\n%.1f", M);
if (M >= 7)
printf("\n\n. . . APROVADO . . .");
else
printf("\n\n. . . REPROVADO . . .");
  		
  	system("pause");
  	return 0;
}