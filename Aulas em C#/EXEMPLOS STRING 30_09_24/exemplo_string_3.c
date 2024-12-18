#include<stdio.h>
#include<locale.h>
void main (void)
{
	int i, vet[5]={1,2,3};
	for (i = 0; i < 5; i++)
	   printf("\nO valor do elemento de indice %d eh %d", i, vet[i]);
  		
  	system("pause");
  	return 0;
}