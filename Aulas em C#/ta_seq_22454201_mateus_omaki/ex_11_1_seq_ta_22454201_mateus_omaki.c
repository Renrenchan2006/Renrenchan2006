/*Elabore um programa que troque
o conteúdo de duas variáveis.
O usuário fornecerá os dois
valores inteiros.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <assert.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 int a, b, magic;
 printf("\nDigite um valor inteiro para A:  ");
 scanf("%i",&a);
 printf("\nDigite agora um valor inteiro para B:  ");
 scanf("%i", &b);
 printf("\n\n     TROCANDO O VALOR AS VARIAVEIS. . . . .\n");
 magic = a;
 a = b;
 b = magic;
 printf("\nA = %i\nB = %i", a, b);
  		
  	system("pause");
  	return 0;
}