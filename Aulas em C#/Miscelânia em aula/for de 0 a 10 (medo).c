#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void)
{
	int X, i;
	
printf(". . . MULTIPLICADOR DE 0 A 10 . . .");
printf("\n\n	Digite um valor:  ");
scanf("%d", X);
for (i = 0; i <= 10; i++){
	(printf("\n\n		%d x %d = %d", X, i, X*i), i++);
	
}
printf("\nFIM");
  		
  	system("pause");
  	return 0;
}

	