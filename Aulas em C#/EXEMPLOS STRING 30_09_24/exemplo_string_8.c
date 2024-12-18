#include<stdio.h>
#include<locale.h>
#include<string.h>
void main (void)
{
  char vet[40]="Ola ";
  char nome[40];
  printf("\nDigite seu nome: ");
  gets(nome);
  strcat (vet, nome);
  puts(vet);
  		
  	system("pause");
  	return 0;
}