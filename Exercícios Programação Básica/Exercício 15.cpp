#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 15. Você quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para fazer
uma viagem até a praia. Dados extras:
- Distância de sua casa até a praia: 520 km
- Seu carro consome 12 litros de gasolina por Km/rodado.
- Você abastece sempre no mesmo posto, onde o preço da gasolina é R$ 2,60 o litro.

 */
 
 //NOTA: Mudei para 12 quilômetros por litro.
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float km=520,l=12;
 	float litro;
 	float custo;
 	
 	litro=km/l;
 	
 	custo = litro*2.6;
 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nSerão necessários %.2f litros para ir à praia", litro);
 	printf("\n\nO custo total será: R$%.2f.", custo);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
