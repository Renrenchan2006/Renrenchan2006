#include <stdio.h>
#include <conio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int a;
unsigned int c;
long int b;
printf("\n Digite três números inteiros:");
scanf("%d %ld %u",&a, &b , &c);
printf("\n O valor da variável A: %d\n O valor da variável B: %ld\n O valor da variável C: %d\n" , a, b, c);
  		
  	system("pause");
  	return 0;
}
