/*Program q imprime numeros impares
em ordem decrescente ate atingir
0 a partir de uma entrada N*/

#include<stdio.h>
void main()
{ int n, i;
	
	printf("\nEntre com o valor N:  ");
	scanf("%d", &n);
	i=n;
	while (i>=0)
	{ if ((i%2)==1)
		{printf("%d\n", i);}
	i = i - 1;
	}
  		
  	system("pause");
  	return 0;
}