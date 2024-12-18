/*3. Suponha que você esteja desenvolvendo um programa para o caixa da 
mercearia do seu bairro. Esse programa deve ser capaz de somar o valor unitário de um 
produto do comércio recebendo como entrada apenas o código identificador dele.  
Para verificar o bom funcionamento da funcionalidade de soma de valor através do código 
você decidiu realizar testes apenas com uma parte dos produtos vendidos, para isso criou 
a seguinte tabela: 

CODIGO		PRODUTO			VALOR UNITÁRIO
100			Detergente		R$ 1,59
101			Esponja			R$ 4,59
102			Lã de aço		R$ 1,79

Desenvolva o código do programa que será utilizado para a realização dos testes com os 
três produtos selecionados. O usuário vai inserir o código e, caso esteja correto será 
apresentado o nome do produto e seu preço.*/

int main (void)
{
 int code;
 
 printf(". . CAIXA ELETRONICO . .\n");
 printf("\nEscolha um dos codigos a seguir:\n\t-100\t-101\t-102\n\n\t");
 scanf("%d", &code);
 
 switch (code)
 {
 	case 100:
 	printf("\n\nCodigo\t\tProduto\t\tValor Unit\n100\t\tDetergente\tR$ 1,59");
 	break;
 	
 	case 101:
 		printf("\n\nCodigo\t\tProduto\t\tValor Unit\n101\t\tEsponja\t\tR$ 4,59");
 		break;
 		
 	case 102:
 		printf("\n\nCodigo\t\tProduto\t\tValor Unit\n102\t\tLa de aco\tR$ 1,79");
 		break;
 	
 	default:
 		printf("\n\nOpcao invalida.");
 }
  		
  	system("pause");
  	return 0;
}