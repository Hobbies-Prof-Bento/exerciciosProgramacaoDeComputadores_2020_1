#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 10. Leia um n�mero fracion�rio e imprima a parte inteira
 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int numerador =0;
 	int denominador=1;
 	int parte_inteira=0;
 	int parte_fracionaria=0;
 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite o numerador de uma fra��o: ");	 	
	scanf("%d",&numerador);
	
	printf("\n\nDigite o denominador de uma fra��o: ");	 	
	scanf("%d",&denominador);
 		
	parte_inteira=numerador/denominador;
	parte_fracionaria=numerador%denominador;
	 
	printf("\n\nO O n�mero inteiro da fra��o � %d e a fracion�ria � %d/%d.", parte_inteira,parte_fracionaria,denominador);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
