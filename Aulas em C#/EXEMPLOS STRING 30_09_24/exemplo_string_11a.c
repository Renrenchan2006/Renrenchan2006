#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
void main (void)
{   int i;
    char vet[40];
    printf("\nDigite o ano que voce nasceu: ");
    i = atoi(gets(vet));
	printf("\nVoce nasceu em %d", i); 
  		
  	system("pause");
  	return 0;
}