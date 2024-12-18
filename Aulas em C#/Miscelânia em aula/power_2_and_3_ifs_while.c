#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void main (void)
{ int inicio = 0, final = 0, y = 0, z = 0;
	do{
	system("cls");
	printf(". . . PROGRAMA DE QUADRADO E CUBO . . .");
	printf("\n\nEste programa ira mostrar o quadrado e o cubo");
	printf("\nDigite o valor inicial:  ");
	scanf("%d", &inicio);
	printf("\nDigite o valor final:  ");
	scanf("%d", &final);
	y = 0;
	z = 0;
	if (final<=inicio)
	printf("\nO valor inicial nao pode ser maior ou igual que o final");}
	while (inicio < final); 
	 printf("\n\nNumero\tQuadrado\tCubo\n\n");
	 printf("%d\t%d\t%d\n", inicio, y, z);
	 inicio++;
	 y = pow(inicio,2);
	 z = pow(inicio,3);
  		
  	system("pause");
  	return 0;
	
}