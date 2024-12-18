/*Faça um algoritmo para calcular o
volume de uma esfera de raio R,
onde R é um valor lido.
Onde: volume = 4/3PiR^3*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float R, vol;
 printf("\nForneca o valor do raio da esfera:\n");
 scanf("\n%f", &R);
 vol =(4.0 / 3.0) * 3.14 * pow(R, 3);
 printf("\n O valor do volume da esfera de raio %.2f (considerando PI como 3,14) eh de: %.2f", R, vol);
  		
  	system("pause");
  	return 0;
}