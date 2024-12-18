/*2. Suponha que você esteja desenvolvendo o sistema de um hotel que deva 
exibir mensagens na recepção para diferentes ações dos hospedes, são elas:
- Fazer Check-in 
- Chamar serviço de quarto 
- Fazer pedido
Faça um programa com switch-case que implemente esse sistema de mensagens da 
recepção.*/

#include <stdio.h>
#include <conio.h>

int main (void)
{
 int act;
 
 printf(". . . . HOTEL SYSTEM . . . .\n");
 printf("\nOpcoes:\n\t1. Fazer Check-in.\n\t2. Chamar servico de quarto.\n\t3. Fazer pedido.");
 printf("\n\nSelecione:  ");
 scanf("%d", &act);
 
 switch (act)
 {
 	case 1:
 	printf("\n\nSelecionou a opcao:\n\t1. Fazer Check-in.");
 	break;
 	
 	case 2:
 		printf("\n\nSelecionou a opcao:\n\t2. Chamar servico de quarto.");
 		break;
 		
 	case 3:
 		printf("\n\nSelecionou a opcao:\n\t3. Fazer pedido.");
 		break;
 	
 	default:
 		printf("\n\nOpcao invalida.");
 }
  		
  	system("pause");
  	return 0;
}