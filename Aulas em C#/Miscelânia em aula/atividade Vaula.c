#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main(void)
{
setlocale(LC_ALL, "Portuguese");
int cod_peca;
float valor_peca, qtd_peca, vtp;

printf("\n Forneca o codigo da peca: ");
scanf("%d", &cod_peca);
printf("\n Forneca o valor da peca: ");
scanf("%f", &valor_peca);
printf("\n Forneca a quantidade de pecas: ");
scanf("%f", &qtd_peca);

vtp = valor_peca * qtd_peca;

printf("\nO valor total da peca de codigo %d eh %.2f",cod_peca,vtp);
  		
  	system("pause");
  	return 0;
}