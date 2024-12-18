/*Elabore um programa que calcula a
  área lateral de um cilindro,
  onde: área = 2 PiRH*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float R, H, area;
 printf("\nForneca o valor do raio do cilindro:\n");
 scanf("\n%f", &R);
 printf("\nForneca o valor da altura do cilindro:\n");
 scanf("\n%f", &H);
 area = 3.14*R*H*2;
 printf("\n O valor da area (considerando PI como 3,14) eh de: %.2f", area);
  		
  	system("pause");
  	return 0;
}
