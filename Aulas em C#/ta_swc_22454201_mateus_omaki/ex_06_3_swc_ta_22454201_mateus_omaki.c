/*6. Escreva um programa que leia o código de um
determinado produto e mostre a sua classificação.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void)
{
  int CODE;
  
  printf(". . . LEITOR DE CODIGO . . .");
  printf("\n\nDigite o codigo do seu produto (1, 2, 3 ou 4):  ");
  scanf("%d", &CODE);
  
  switch (CODE)
  {
  	case 1:
  		printf("\n\nCODIGO\tDESCRICAO\n1\tAlimento nao-perecivel\n\n");
  		break;
  	case 2:
  		printf("\n\nCODIGO\tDESCRICAO\n2\tAlimento Perecivel\n\n");
  		break;
  	case 3:
  		printf("\n\nCODIGO\tDESCRICAO\n3\tVestuario\n\n");
  		break;
  	case 4:
  		printf("\n\nCODIGO\tDESCRICAO\n4\tLimpeza\n\n");
  		break;
  }
   	system("pause");
  	return 0;
}