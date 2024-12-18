/*Elabore um programa que faça a conversão de graus
Fahrenheit para graus Celsius (Celsius-ºC),
Onde:C = (F - 32) /1.8*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float F, C;
 
 printf("\n Digite a temperatura em Fahrenheit: ");
 scanf("%f", &F);
  C =(F-32)*5/9;
 printf("\n Temperatura em Celsius: %.2f", C);
  		
  	system("pause");
  	return 0;
}