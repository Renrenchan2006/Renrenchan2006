/*5. Faça um programa que calcule o “peso ideal” de um usuário de acordo com 
um caractere identificador de sexo (“M” para Masculino ou “F” para Feminino)
inserido pelo mesmo. A fórmula para cada um dos dois casos está definida abaixo. 
Caso “M”, utilize a fórmula: PesoIdeal = 52 + (0.75 × (altura - 152.4) 
Caso “F”, utilize a fórmula: PesoIdeal = 52 + (0.67 × (altura - 152.4)*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void)
{
 char GEN;
 float PI, ALT;
 
 printf(". . . DESCUBRA SEU PESO IDEAL . . .");
 printf("\n\nQual eh o seu genero biologico?\n(Escreva 'M' para masculino ou 'F' para feminino):  ");
 scanf("%c", &GEN);

 switch (GEN)
 { 
 	case 'M':
 	 printf("\n\nPor favor, digite sua altura em centimetros:  ");
 	 scanf("%f", &ALT);
 	 PI = 52 + (0.75 * (ALT-152.4));
 	 printf("\n\nSeu peso ideal eh: %.2f", PI);
 	 break;
 	
 	case 'F':
 	 printf("\n\nPor favor, digite sua altura em centimetros:  ");
 	 scanf("%f", &ALT);
 	 PI = 52 + (0.67 * (ALT-152.4));
 	 printf("\n\nSeu peso ideal eh: %.2f", PI);
 	 break;
 }
   	system("pause");
  	return 0;
}