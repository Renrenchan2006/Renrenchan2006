#include <stdio.h>

void main(void)
{ 
	int i, n;
  printf("\nEntre com o numero: ");
  scanf("%d", &n);
  for (printf("\n          Dec, Oct, Hex"), i=1; i<=n; i=i+1 );
  {
  if ((i%2)==0)
    printf("\nnumero par -----> %4d, %4o, %0X",i,i,i);
  }
  printf("\nFIM");
  		
  	system("pause");
  	return 0;
}