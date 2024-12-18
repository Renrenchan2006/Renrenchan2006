/* 1. Elabore um programa que leia dois valores reais
 e mostre o resultado do aditivo desses valores */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void)
{
	setlocale(LC_ALL, "Portuguese");
     
	float n1, n2;
	printf("\n Digite o valor 1: ");
	scanf("%f", &n1);
	printf("\n Digite o valor 2: ");
	scanf("%f", &n2);
	printf ("\n O valor de %.2f + %.2f = %.2f", n1, n2, n1 + n2);
  		
  	system("pause");
  	return 0;
}