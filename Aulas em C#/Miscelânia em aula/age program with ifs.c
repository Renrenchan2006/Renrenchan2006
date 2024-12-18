/*0 a 2 anos – bebê
3 a 11 anos – infantil
12 a 17 – adolescente
18 ou mais – adulto*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(void){
	float age;
	
printf("\n\nDiga sua idade: ");
scanf("%f", &age);
if (age <= 2)
printf ("\nBebe");
if (age >= 3 && age <=11)
printf("\nInfantil");
if (age >= 12 && age <=17)
printf("\nAdolescente");
if (age >= 18 )
printf("\nAdulto");
  		
  	system("pause");
  	return 0;
}