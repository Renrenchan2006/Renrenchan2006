/*Elabore um programa que leia
dois valores reais e mostre o resultado
da adição e da subtração desses valores.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float a, b, add, subt;
 printf("\nValor real de A:  ");
 scanf("%f", &a);
 printf("\nValor real de B:  ");
 scanf("%f", &b);
 add = a + b;
 subt = a - b;
 printf("\n\n%.2f + %.2f = %.3f", a, b, add);
 printf("\n%.2f - %.2f = %.3f", a, b, subt);
  		
  	system("pause");
  	return 0;
}