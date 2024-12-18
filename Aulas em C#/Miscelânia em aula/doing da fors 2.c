#include <stdio.h>
void main (void){
int i, inicio, fim;
printf("\nEntre com o valor inicial:  ");
scanf("%d", &inicio);
printf("\nEntre com o valor final:  ");
scanf("%d", &fim);
if (fim < inicio)
	printf("\nO valor final nao pode ser menor que o inicial");
else{
	for(printf("\n			Dec, Oct, Hex"); inicio <= fim; inicio++)
	{
		if ((inicio%2) == 0)
		printf("\nNumero par -----------> %4d, %4o, %0X", inicio, inicio, inicio);
	}
		printf("\nFIM");
}
  		
  	system("pause");
  	return 0;
}