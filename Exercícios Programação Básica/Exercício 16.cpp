#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 16. Escreva um programa para ajudar vendedores. 
A partir de um valor total recebido do teclado, mostrar:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3 x sem juros;
- a comiss�o do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto )
- a comiss�o do vendedor, no caso da venda ser parcelada (5% sobre o valor total)


 */
 
 
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float valor_compra;
 	int op=0;
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nPor gentileza digite o valor da compra: R$");
 	scanf("%f",&valor_compra);
 	
 	a:
 	
 	system("cls");
 	
 	printf("FORMAS DE PAGAMENTO");
 	printf("\n\n[1] � vista (10 por cento de desconto)");
 	printf("\n[2] 3x sem juros");
 	
 	printf("\n\nESCOLHA: ");
	scanf("%d",&op);
 	
 	switch(op)
	 {
	 	case 1:
	 		
	 		printf("\n\nValor a pagar: R$%.2f", valor_compra*0.9);
	 		printf("\nComiss�o do vendedor: R$%.2f",(valor_compra*0.90)*0.05);
	 		
	 		printf("\n\n\n");
 	
 			system("pause");
 			
 			return 0;
	 		
	 	case 2:
	 		
	 		printf("\n\nValor sw cada parcela pagar: R$%2.f", valor_compra/3);
	 		printf("\nComiss�o do vendedor: R$%.2f",valor_compra*0.05);
	 	
		 	printf("\n\n\n");
 	
 			system("pause");	
 			
 			return 0;
 			
 		default:
 			
 			printf("\n\nOP��O INV�LIDA!!");
 			
 			printf("\n\n\n");
 	
 			system("pause");	
 			
 			goto a;
	 		
	 } 	
 }
