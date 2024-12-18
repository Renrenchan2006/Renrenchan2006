/*. Construa um programa que calcule a média
aritmética de duas notas bimestrais fornecidas
pelo usuário. Onde: média = (nota1 + nota2)/2*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float N1, N2;
 
 printf("\n Digite sua nota do primeiro bimestre: ");
 scanf("%f", &N1);
 printf("\n Digite sua nota do segundo bimestre: ");
 scanf("%f", &N2);
 printf("\n Sua media aritmetica das duas notas eh: %.1f", (N1 + N2)/2);
  		
  	system("pause");
  	return 0;
}
