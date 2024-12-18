#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
float A1=0, A2=0, A3=0, A4=0, MEDIA=0;
printf("\n Digite a nota A1: ");
	scanf("%f", &A1);
printf("\n Digite a nota A2: ");
	scanf("%f", &A2);
printf("\n Digite a nota A3: ");
	scanf("%f", &A3);
printf("\n Digite a nota A4: ");
	scanf("%f", &A4);
MEDIA=(A1+A2+A3+A4)/4.0;
printf("\n A média do aluno é %.2f", MEDIA);
  		
  	system("pause");
  	return 0;
}
