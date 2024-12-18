/*Faça um programa que leia o ano de nascimento
de uma pessoa e calcule sua idade. Após
isso verifique se ela já tem idade para votar
(16 anos ou mais). mostre a mensagem informando a situação dela:
a) A idade é xx anos e já pode votar.
b) A idade é xx anos e não pode votar.
alt 1. Na tela de saída, mostre também a data de nascimento.
alt 2. Mostre também a idade da pessoa.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float age, dd, mm, aaaa;
printf(". . . IDADE PARA VOTACAO 2024 . . .");
printf("\n\nPonha seu dia de nascimento:  ");
scanf("%f", &dd);
printf("\nAgora ponha seu mes de nascimento:  ");
scanf("%f", &mm);
printf("\nPor fim, digite seu ano de nascimento (4 digitos):  ");
scanf("%f", &aaaa);
printf("\n Data de Nascimento do usuario (dd/mm/aaaa): %.0f/%.0f/%.0f", dd, mm, aaaa);
age = 2024 - aaaa;
if (aaaa <= 2008)
printf("\n\n A idade eh %.0f anos e ja pode votar", age);
else
printf("\n\n A idade eh %.0f anos e nao pode votar", age);
}