#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 11. Faça um programa que leia valores para as variáveis A, B e C e mostre o resultado da seguinte
expressão: ( A - B ) * C

 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int A,B,C;
 	int operacao;
 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite um número inteiro A: ");	 	
	scanf("%d",&A);
	
	printf("\n\nDigite um número inteiro B: ");	 	
	scanf("%d",&B);
 		
	printf("\n\nDigite um número inteiro C: ");	 	
	scanf("%d",&C);
	 		
	operacao=(A-B)*C;
	 
	printf("\n\nO resultado da operação é: %d.", operacao);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
