#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
void main(void)
{
	//int n=0;
	int inicial=0,final=0;
	do{
		system("cls");	
		printf("\n Digite o valor inicial: ");
		scanf("%d",&inicial);
		printf("\n Digite o valor final: ");
		scanf("%d",&final);
		if(final<=inicial)
			{printf("\n o valor final nao pode ser meno e nem igual ao inicial");
			printf("\n Pressione qualquer tecla para continuar.");
			getch();
			}
	}while (final<=inicial);
	printf("numero\t\tQuadrado\tCubo");
	while (inicial<=final)
	{
		printf("\n%d\t\t%d\t\t%d",inicial,inicial*inicial,inicial*inicial*inicial);
		inicial++;
	}
  		
  	system("pause");
  	return 0;
}