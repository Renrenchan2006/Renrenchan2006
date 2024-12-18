#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main (void)
{   int i, cont=0, vet [4];
    char aux[10];
    for (i=0; i<4; i++)
	{  printf("\nDigite o elemento %d:  ", i);
	   vet[i]=atoi(gets(aux));  }
    for (i=0; i<4; i++)
    	{  printf("\nO valor armazenado no elemento %d do vetro eh %d", i, vet[i]);  }
  		
  	system("pause");
  	return 0;
}