/*Elabore o programa que calcule a soma de dois valores inteiros que serão fornecidos pelo
usuário. Após a realização do exercício 2 faça as seguintes alterações no código:
a. No final do programa, acrescente a subtração dos valores lidos e mostre o resultado.
b. No final do programa, acrescente a multiplicação dos valores lidos e mostre o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	printf("\nDigite o valor 1: ");
	scanf("%d", &n1);
	printf("\nDigite o valor 2: ");
	scanf("%d", &n2);
	printf("\n Soma: %d + %d = %d",n1, n2, n1 + n2);
	printf("\n Subtração: %d - %d = %d",n1, n2, n1 - n2);
	printf("\n Multiplicação: %d * %d = %d", n1, n2, n1*n2);
  		
  	system("pause");
  	return 0;
}