#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 float a, b, c;
 printf("THE TRANGLO VIEWER PROGRAM");
 printf("\n\nDigite o valor da medida A do seu triangulo:  ");
 scanf("%f", &a);
 printf("\nAgora o valor da medida B:  ");
 scanf("%f", &b);
 printf("\nPor fim o valor da medida C:  ");
 scanf("%f", &c);
 
 if (a==b && b==c && c==a)
 printf("\n\nEh um triangulo equilatero.");
 if (a!=b && b!=c && c!=a)
 printf("\n\nEh um triangulo escaleno.");
 if (a==b && a!=c || a==c && a!=b || b==c && b!=a)
 printf("\n\nEh um triangulo isosceles.");
  		
  	system("pause");
  	return 0;
}
