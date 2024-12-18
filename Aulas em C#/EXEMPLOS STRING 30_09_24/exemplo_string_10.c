#include<stdio.h>
#include<string.h>
void main (void)
{
  int i;
  char nome[40];
  printf("\nDigite seu nome: ");
  gets (nome);
  for (i=0; nome[i]!='\0'; i++)
     {if (nome[i] <= 122)
     	    nome [i] = nome[i] - 32;}
	puts(nome);
  		
  	system("pause");
  	return 0;
}