/* x vezes 2 com potencia de 0 a 10*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <conio.h>

void main (void)
{
	int n = 0;
	int i = 0;
	
	printf("\nInforme um numero para calcular:  ");
	scanf("%d", &n);
	for(printf("Produto de %d vezes a potencia de 2", n), i = 0; i <= 10; i++)
		printf("\n%d x 2^%d = %.0f", n, i, n*pow(2,i));
  		
  	system("pause");
  	return 0;
}