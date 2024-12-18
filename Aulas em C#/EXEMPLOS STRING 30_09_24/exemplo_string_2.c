#include<stdio.h>
#include<locale.h>
void main (void)
{
	int i, quad [10]={1,2,3,4,5,6,7,8,9,10};
	for(i = 0; i < 10; i++)
	   printf("\nO valor armazenado no elemento de indice %d eh %d", i, quad[i]);
  		
  	system("pause");
  	return 0;
}