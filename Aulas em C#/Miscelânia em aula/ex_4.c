#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
//testando operador, módulo e cast
int a=7, b=2, result;
float resp;
result = a%b;
printf("\n O resto da divisão de %d por %d = %d", a, b, result);
resp = a/b;
printf("\n O resultado de %d dividido por %d = %.2f", a, b, resp);
resp = (float) a/b;
printf("\n O resultado de %d dividido por %d com uso de casts é %.2f", a, b, resp);
  		
  	system("pause");
  	return 0;
}
