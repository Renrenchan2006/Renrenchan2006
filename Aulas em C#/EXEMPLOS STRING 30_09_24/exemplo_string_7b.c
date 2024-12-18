#include<stdio.h>
#include<locale.h>
#include<string.h>
void main (void)
{
  char vet[40];
  char nome[40]="Obstacle 1";
  printf("\nDigite seu nome: ");
  gets(vet);
  strcpy(nome,vet);
  puts(vet);
  puts(nome);
  		
  	system("pause");
  	return 0;
}