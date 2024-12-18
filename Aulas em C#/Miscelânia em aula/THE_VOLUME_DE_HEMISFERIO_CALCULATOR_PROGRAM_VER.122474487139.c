/*Receba valores necessários pra calcular
volume de hemisfério em m³*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141516

void main()
{
	float V, r;
	
	printf(". . . THE VOLUME DE HEMISFERIO CALCULATOR PROGRAM VER.122474487139 . . .");
	printf("\n\nDigite o volume do raio em metros:  ");
	scanf("%f", &r);
	V = pow(r,3)*pi*2/3;
	printf("\nO volume em metro cubico corresponde a: %f", V);
  		
  	system("pause");
  	return 0;
}