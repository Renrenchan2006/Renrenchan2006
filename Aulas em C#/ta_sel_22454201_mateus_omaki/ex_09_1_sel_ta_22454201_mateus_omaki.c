/* Projete o programa que calcule as raízes de uma equação do 2° grau.
levando em consideração a análise da existência de raízes reais.
Se o valor de delta for menor que zero, não existem raízes reais;
se delta for igual a zero, existem duas raízes iguais;
se delta for maior que zero, existem duas raízes diferentes.
Expressão: ax^2 + bx + c = 0 
x = (- b +-  raiz_quadrada ( delta ))/2a 
delta = (b^2 - 4 a c)*/

#include <math.h>
#include <stdio.h>

void main (void)
{
 float delta, x1, x2;
 int a, b, c;
 
 printf(". . CALCULADORA DE EQUACAO DE SEGUNDO GRAU . .\n");
 printf("\nExpressao: ax^2 + bx + c = 0\n");
 
 printf("\nDigite o coeficiente a: ");
 scanf("%d", &a);
 printf("\nDigite o coeficiente b: ");
 scanf("%d", &b);
 printf("\nDigite o coeficiente c: ");
 scanf("%d", &c);

 delta = pow(b,2) - 4*a*c;
 
 if(delta>=0){
 	x1 = (-b+sqrt(delta))/2*a;
 	x2 = (-b-sqrt(delta))/2*a;
}
 printf("\nDelta = %.3f", delta);
 if(delta > 0)
 printf("\nx1 = %.3f\nx2 = %.3f", x1, x2);
 if(delta == 0)
 printf("\nx1 = x2 = %.3f", x1);
 if (delta < 0)
 printf("\nNao existe raiz real.");
  		
  	system("pause");
  	return 0;
 
 
}