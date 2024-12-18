/*1. Desenvolva um programa que receba como entrada um número inteiro que 
represente um dos 7 dias da semana e imprima na tela se esse dia é útil,
final de semana ou inválido. Considere que Domingo é o dia 1 e Sábado o dia 7.*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
 int dia;
 
 printf("\n\nDigite o valor de 1 a 7 para os dias da semana.\nSendo domingo = 1 e sabado = 7\n\n");
scanf("%d", &dia);

 switch (dia)
 {
 	case 1:
 		printf("\nDomingo. 	FINAL DE SEMANA.");
 		break;
 	case 2:
 		printf("\nSegunda-feira. 	DIA UTIL.");
 		break;
 	case 3:
 		printf("\nTerca-feira 	DIA UTIL.");
 		break;
 	case 4:
 		printf("\nQuarta-feira. 	DIA UTIL.");
 		break;
 	case 5:
 		printf("\nQuinta-feira. 	DIA UTIL.");
 		break;
 	case 6:
 		printf("\n4Sexta-feira. 	DIA UTIL");
 		break;
 	case 7:
 		printf("\nSabado. 	FINAL DE SEMANA");
 		break;
 	default:
 		printf("\nINVALIDO.");
 }
  		
  	system("pause");
  	return 0;
}