#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 15. Voc� quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para fazer
uma viagem at� a praia. Dados extras:
- Dist�ncia de sua casa at� a praia: 520 km
- Seu carro consome 12 litros de gasolina por Km/rodado.
- Voc� abastece sempre no mesmo posto, onde o pre�o da gasolina � R$ 2,60 o litro.

 */
 
 //NOTA: Mudei para 12 quil�metros por litro.
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float km=520,l=12;
 	float litro;
 	float custo;
 	
 	litro=km/l;
 	
 	custo = litro*2.6;
 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nSer�o necess�rios %.2f litros para ir � praia", litro);
 	printf("\n\nO custo total ser�: R$%.2f.", custo);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
