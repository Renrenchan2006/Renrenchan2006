#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
setlocale(LC_ALL, "Portuguese");
//testando as funções de entrada que operam uma variável do tipo char
char c1,c2,c3;
printf("\nDigite um caracter:");
c1=getche();
printf("\nDigite outro caracter:");
c2=getch();
printf("\nDigite mais um caracter:");
c3=getchar();
putchar(c1);
putchar(c2);
putchar(c3);
  		
  	system("pause");
  	return 0;
}
