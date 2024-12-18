/*3. Elabore o programa que leia um número qualquer
e verifique se ele é positivo, nulo ou negativo.
alt 1.Se for positivo, mostre o valor e o dobro dele
alt 2.Se for negativo, mostre o valor e o triplo dele
*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int n, Nneg, Npos;
	printf(". . . SALDO POSITIVO, NULO OU NEGATIVO . . .");
	printf("\n\nDigite um valor e direi seu saldo:  ");
	scanf("%d", &n);
	Nneg = n*3;
	Npos = n*2;
	
	if (n < 0)
	{Nneg = n*3;
	printf("\nO saldo %d eh negativo. O triplo do valor eh %d", n, Nneg);}
	
	if (n > 0)
	{Npos = n*2;
	printf("\nO saldo %d eh positivo. O dobro do valor eh %d", n, Npos);}
	
	if ( n == 0)
	printf("\nO saldo %d eh nulo.", n);
}