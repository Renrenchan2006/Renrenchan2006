/*Projete um programa para calcular a área de um triângulo (área = (b * h) /2).
O usuário fornecerá todos os dados necessários, ou seja, a base e a altura. 
Após a realização do exercício 3 faça as seguintes alterações no código:
a. Mostre o valor da área com três casas decimais.
b. Na tela de saída de dados, mostre também o valor da base e da altura.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
    setlocale(LC_ALL, "Portuguese");
	
	float b, h;
	printf("\n Digite o tamanho da base do triangulo: ");
	scanf("%f", &b);
	printf("\n Digite o tamanho da altura do triangulo: ");
	scanf("%f", &h);
	printf("\n Valor da base: %.0f", b);
	printf("\n Valor da altura: %.0f", h);
	printf("\n Valor da area: %.3f", b * h/2);
  		
  	system("pause");
  	return 0;
}