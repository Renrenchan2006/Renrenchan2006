#include <Stdio.h>
#include <locale.h>
void main (void)
{
int i, quad [10];
for (i = 0; i < 11; i++)
   quad[i]= i*i;
for (i = 0; i < 11; i++)
   printf("\nO quadrado de %d = %d", i, quad[i]); 
  		
  	system("pause");
  	return 0;
}