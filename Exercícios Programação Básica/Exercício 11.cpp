#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 11. Fa�a um programa que leia valores para as vari�veis A, B e C e mostre o resultado da seguinte
express�o: ( A - B ) * C

 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int A,B,C;
 	int operacao;
 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite um n�mero inteiro A: ");	 	
	scanf("%d",&A);
	
	printf("\n\nDigite um n�mero inteiro B: ");	 	
	scanf("%d",&B);
 		
	printf("\n\nDigite um n�mero inteiro C: ");	 	
	scanf("%d",&C);
	 		
	operacao=(A-B)*C;
	 
	printf("\n\nO resultado da opera��o �: %d.", operacao);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
