#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 10. Leia um número fracionário e imprima a parte inteira
 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int numerador =0;
 	int denominador=1;
 	int parte_inteira=0;
 	int parte_fracionaria=0;
 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite o numerador de uma fração: ");	 	
	scanf("%d",&numerador);
	
	printf("\n\nDigite o denominador de uma fração: ");	 	
	scanf("%d",&denominador);
 		
	parte_inteira=numerador/denominador;
	parte_fracionaria=numerador%denominador;
	 
	printf("\n\nO O número inteiro da fração é %d e a fracionária é %d/%d.", parte_inteira,parte_fracionaria,denominador);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
