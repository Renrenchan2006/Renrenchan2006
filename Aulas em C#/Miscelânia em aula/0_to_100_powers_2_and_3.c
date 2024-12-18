/*Programa que calcula quadrado e cubo
dos números inteiros de 0 a 100*/

#include<math.h>
#include<stdio.h>

void main ()
{ int x, y, z;

	printf(". . . PROGRAMA DE QUADRADO E CUBO . . .");
	printf("\n\nEste programa ira mostrar o quadrado e cubo de 0 a 100\n\n");
	x = 0;
	y = 0;
	z = 0;

	while (x<=100)
	{ printf("%d	%d	%d\n", x, y, z);
	  x = x + 1;
	  y = pow(x,2);
	  z = pow(x,3);
	}
  		
  	system("pause");
  	return 0;
}