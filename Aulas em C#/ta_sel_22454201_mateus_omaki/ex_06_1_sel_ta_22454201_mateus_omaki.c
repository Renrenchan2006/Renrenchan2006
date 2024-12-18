/*Analise o resultado de uma transação comercial. Verifique a
situação final do comerciante trabalhando com os valores lidos,
ou seja, o preço de compra e o preço de venda. Gere a tela 
de saída com uma das seguintes mensagens: 
“Teve lucro.”, “Teve prejuízo.” ou “Os valores são iguais.”.
Alterações: Na saída, mostre também o valor do preço de compra e do preço de venda.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void)
{
 float compra, venda;
 printf("LUCRO E PREJUIZO DE PRODUTO COMPRA E VENDA.");
 printf("\nDigite o valor da compra:  ");
 scanf("%f", &compra);
 printf("\nAgora digite o valor da venda:  ");
 scanf("%f", &venda);
 
 if (compra > venda)
 printf("\nTEVE PREJUIZO\nPreco da compra: R$ %.2f, preco da venda: R$ %.2f", compra, venda);
 if (compra == venda)
 printf("\nOS VALORES SAO IGUAIS\nPreco da compra: R$ %.2f, preco da venda: R$ %.2f", compra, venda);
 if (compra < venda)
 printf("\nTEVE LUCRO\nPreco da compra: R$ %.2f, preco da venda: R$ %.2f", compra, venda);
  		
  	system("pause");
  	return 0;
}