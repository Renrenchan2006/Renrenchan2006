/*4. Desenvolva um programa que simule as 4 operações matemáticas básicas.
A entrada para a escolha de uma das 4 operações disponíveis é dada da seguinte forma: 
	SOMA
	SUBTRAÇÃO
	MULTIPLICAÇÃO
	DIVISÃO
Seguida dos 2 operandos que participarão efetivamente da operação.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)
{
  int op;
  float x, y, xy;
  
  printf(". . OPERACOES MATEMATICAS BASICAS . .\n");
  printf("\nSelecione uma das seguintes opcoes:\n\t1. SOMA\n\t2. SUBTRACAO\n\t3. MULTIPLICACAO\n\t4. DIVISAO\n\n\t");
  scanf("%d", &op);
  
  switch (op)
  {
  	case 1:
  		printf("\n\nDigite o valor para X:  ");
  		scanf("%f", &x);
  		printf("\nDigite o valor para Y:  ");
  		scanf("%f", &y);
  		xy = x+y;
		printf("\n\tX + Y\n\t%.0f + %.0f = %.0f", x, y ,xy);
  		break;
  		
  	case 2:
  		printf("\n\nDigite o valor para X:  ");
  		scanf("%f", &x);
  		printf("\nDigite o valor para Y:  ");
  		scanf("%f", &y);
  		xy = x-y;
  		printf("\n\tX - Y\n\t%.0f - %.0f = %.0f", x, y ,xy);
  		break;
  	
  	case 3:
  		printf("\n\nDigite o valor para X:  ");
  		scanf("%f", &x);
  		printf("\nDigite o valor para Y:  ");
  		scanf("%f", &y);
  		xy = x*y;
  		printf("\n\tX * Y\n\t%.0f * %.0f = %.0f", x, y ,xy);
  		break;
  		
  	case 4:
  		printf("\n\nDigite o valor para X:  ");
  		scanf("%f", &x);
  		printf("\nDigite o valor para Y:  ");
  		scanf("%f", &y);
  		xy = x/y;
  		if (y == 0)
  			{printf("\nO divisor nao pode ser 0.");}
  		else
		  printf("\n\tX / Y\n\t%.0f / %.0f = %.2f", x, y ,xy);
  		break;
  	
  	default:
  		printf("\nOPCAO INVALIDA.");
  		break;
		  }
  		

    system("pause");
  	return 0;
}