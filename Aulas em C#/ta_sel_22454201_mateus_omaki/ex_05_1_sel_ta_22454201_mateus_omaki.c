/* Elabore o programa que verifica se o valor inteiro
fornecido pelo usuário é par ou ímpar. 
Analise o problema e verifique quais são os
dados que o usuário precisa fornecer.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int value;
 printf("\nDigite um valor inteiro e direi se eh par ou impar:  ");
 scanf("%i", &value);
 if (value == 0)
 {printf("\n\nValor nulo");}
 if (value % 2 == 0 && value > 0)
 {printf("\n\nO valor %i eh par.", value);}
 if (value % 2 == 1)
 {printf("\n\nO valor %i eh impar.", value);}
}