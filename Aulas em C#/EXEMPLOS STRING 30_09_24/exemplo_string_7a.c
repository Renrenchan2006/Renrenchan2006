#include<stdio.h>
#include<locale.h>
#include<string.h>
void main (void)
{
  char vet[40];
  char nome[40]="Obstacle 1";
  printf("\nDigite seu nome: ");
  gets(vet);
  strcpy(vet,nome);
  puts(nome);
  puts(vet);
  		
  	system("pause");
  	return 0;
}