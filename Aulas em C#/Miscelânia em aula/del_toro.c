#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(void)
{
	setlocale(LC_ALL, "Portuguese");

	float V, r, R;
	printf("\n. . . Calculador de Volume de Toroides . . .");
	printf("\nDigite o valor do raio da secao transversal (r):  ");
	scanf("%f", &r);
	printf("\nAgora digite o valor da distancia entre o centro do toro");
	printf("\ne o centro da secao transversal (R):  ");
	scanf("%f", &R);
	V = 2*pow(3.141516,2)*pow(r,2)*R;
	printf("\n\nO volumo do Toroide eh %.3f", V);
  		
  	system("pause");
  	return 0;
}