/*8. Projete o programa que leia um valor numérico e verifique
se ele é maior ou igual a 100. Mostre uma das mensagens:
“Valor maior ou igual a cem.” Ou “Valor menor que cem.”
alt1.Mostrar também o valor numérico lido, na tela de saída.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{
 int x;
 
 printf(". . . MAIOR OU MENOR. . .\n");
 printf("\nDigite um valor inteiro:  ");
 scanf("%d", &x);
 
 if (x >= 100)
 printf("\nO valor %d eh maior ou igual a 100", x);
 if (x < 100)
 printf("\nO valor %d eh menor que 100", x);
  		
  	system("pause");
  	return 0;
}