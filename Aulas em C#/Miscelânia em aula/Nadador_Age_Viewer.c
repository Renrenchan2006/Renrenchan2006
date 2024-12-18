#include <stdio.h>
#include <stdlib.h>

void main(void){
	float age;
	
printf(". . . NADADOR AGE VIEWER . . .");
printf("\n\nCaro nadador, digite sua idade: ");
scanf("%f", &age);
if (age < 5)
printf ("\nSai pirralho");
if (age >= 5 && age <=10)
printf("\nInfantil");
if (age >= 11 && age <=17)
printf("\nJuvenil");
if (age >= 18 && age <=40 )
printf("\nAdulto");
if (age > 40 && age <= 120)
printf("\nVeterano");
if (age > 120)
printf("\nBIOLOGICAMENTE IMPOSSIVEL");
  		
  	system("pause");
  	return 0;
}