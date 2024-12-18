/*4. Construa o programa que calcule o peso ideal de uma pessoa.
 Utilize as seguintes fórmulas:
- Se homem, o peso ideal é calculado assim: (72,7 * altura) - 58;
- Se mulher, o peso ideal é calculado assim: (62,1 * altura) - 44,7.
alt 1.Mostre o peso com duas casas decimais.
alt 2.Troque a entrada para ‘m’ ou ‘f’.
alt 3.Mostre uma mensagem de erro se ele digitar
valor de gênero diferente de ‘m’ ou ‘f’.

foi oq deu prof
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void)
{
  float gen, alt, pesom, pesof; 
  printf(". . . PESO IDEAL CALCULATOR . . .");
  printf("\n\nDigite seu genero  biologico, sendo homem = 1 e mulher = 0:  ");
  scanf("%f", &gen);
  if (gen = 1)
  {printf("\n\nDigite sua altura em metros:  ");
   scanf("%f", &alt);
   pesom = 72.7*alt - 58;
   printf("\nO peso ideal M eh %.2f", pesom);
   }
  if (gen = 0)
  {printf("\n\nDigite sua altura em metros:  ");
   scanf("%f", &alt);
   pesof = 62.1*alt - 44.7;
   printf("\nO peso ideal F eh %.2f", pesof);
   }
   if (gen!=0 && gen!=1)
   printf("\nInvalido.");
}