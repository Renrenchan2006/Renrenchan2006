#include<stdio.h>
#include<locale.h>
#include<string.h>
void main (void)
{
  int i;
  char vet[40];
  char nome[40];
   printf("\nDigite uma string 1: ");
   gets(nome);
   printf("\nDigite uma string 2: ");
   gets(vet);
   i=strcmp(vet, nome);
   if (i==0)
     printf("\nStrings iguais.");
   else
     printf("\nStrings diferentes %d", i);
  		
  	system("pause");
  	return 0;
}