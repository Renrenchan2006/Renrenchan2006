#include <stdio.h>
#include <conio.h>
void main (void )
{
char x;
printf("1. Inclusao \n");
printf("2. Alteracao \n");
printf("3. Exclusao \n");
printf(" Digite sua opcao: ");
x = getchar( );
switch(x) {
case '1':
printf("escolheu inclusao\n");
break;
case '2':
printf("escolheu alteracao\n");
break;
case '3':
printf("escolheu exclusao\n");
break;
default:
printf("opcao invalida\n");
}
  		
  	system("pause");
  	return 0;
}