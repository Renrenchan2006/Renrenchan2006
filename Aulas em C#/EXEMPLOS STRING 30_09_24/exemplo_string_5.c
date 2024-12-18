#include<stdio.h>
#include<locale.h>
#include<string.h>
void main(void)
{
	int i;
	char vet[40];
	printf("\nDigite seu nome: ");
	gets(vet);
	printf("\nO seu nome %s possui %d caracteres", vet, strlen(vet));
  		
  	system("pause");
  	return 0;
}
