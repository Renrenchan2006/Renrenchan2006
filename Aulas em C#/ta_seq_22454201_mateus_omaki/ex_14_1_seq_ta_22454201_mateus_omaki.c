/*Escreva um programa que solicite 3 números
em ponto flutuante e imprima a média
aritmética desses números.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float x, y ,z, MEDIA;
 printf("\n. . . . MEDIA ARITMETICA . . . .\n");
 printf("\nValor do x =  ");
 scanf("%f", &x);
 printf("\nValor do y =  ");
 scanf("%f", &y);
 printf("\nValor do z =  ");
 scanf("%f", &z);
 MEDIA = (x + y + z)/3;
 printf("\n\n. . . A MEDIA ARITMETICA DE %.0f, %.0f E %.0f EH: %.2f", x, y, z, MEDIA);
  		
  	system("pause");
  	return 0;
}