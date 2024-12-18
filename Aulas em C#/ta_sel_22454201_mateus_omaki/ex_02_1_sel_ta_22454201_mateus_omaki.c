/*2. Faça um programa que leia dois valores quaisquer
e mostre o maior deles ou mostre a mensagem 
“Os valores são iguais.”
alt 1.Se eles forem diferentes, mostre os valores
digitados na ordem decrescente. 
alt 2.Se eles forem iguais, mostre a mensagem
e o valor digitado.
*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{int x, y;

printf(". . . MAIOR, MENOR OU IGUAL . . . ");
printf("\n\nDigite um valor para X:  ");
scanf("%d", &x);
printf("\n\nDigite um valor para Y:  ");
scanf("%d", &y);

if (x==y)
printf("\nX = %d = %d = Y", x, y);
if (x>y && x!=y)
printf("\nX = %d > %d = Y", x, y);
if (x<y && x!=y)
printf("\nY = %d > %d = X", y, x);
}