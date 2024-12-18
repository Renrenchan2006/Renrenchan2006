/*Elabore um programa que calcula o
 comprimento de uma circunferência.
 Onde:2PiR*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float R, comp;
 printf("\nForneca o valor do raio da circunferencia:\n");
 scanf("\n%f", &R);
 comp = 3.14*R*2;
 printf("\n O valor do comprimento (considerando PI como 3,14) eh de: %.2f", comp);
  		
  	system("pause");
  	return 0;
}
