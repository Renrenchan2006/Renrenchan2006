/*.Sabendo que a 01 pé equivale a 0.3048m,
faça um programa que converta pés em metros.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float pe, metro;
 printf("\n. . .CONVERSOR DE PE PARA METRO. . .");
 printf("\nDigite o comprimento em pes:  ");
 scanf("%f", &pe);
 metro = pe*0.3048;
 printf("\nO VALOR EM METROS EH DE:  %.3f", metro);
  		
  	system("pause");
  	return 0;
}