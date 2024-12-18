/*Elabore um programa que calcule a área de um círculo.
O usuário fornecerá o valor do raio.
Onde: área = Pi*R^2 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float R, area;
 printf("\nForneca o valor do raio da circunferencia:\n");
 scanf("\n%f", &R);
 area = 3.14*R*R;
 printf("\n O valor da area (considerando PI como 3,14) eh de: %.2f", area);
  		
  	system("pause");
  	return 0;
}
