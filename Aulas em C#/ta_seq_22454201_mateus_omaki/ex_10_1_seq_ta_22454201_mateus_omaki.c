/*Construa um programa para calcular a raiz de
uma equação do 1º grau. Os coeficientes “a”
e “b” são fornecidos pelo usuário.
Calcule a raiz sem fazer crítica.
Equação: a x + b = 0, onde: raiz = - b/a*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float a, b, x;
 printf("\nForneca o valor de 'a' para a equacao 'a*x + b = 0':  ");
 scanf("\n%f", &a);
 printf("\nAgora forneca o valor de 'b' para a equacao '%.0f*x + b = 0':  ", a);
 scanf("\n%f", &b);
 x = -b/a;
 printf("\n\nA raiz da equacao eh %.2f", x);
  		
  	system("pause");
  	return 0;
}