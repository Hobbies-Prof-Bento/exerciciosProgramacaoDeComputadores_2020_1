#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 13. Fazer um algoritmo para ler duas notas, os pesos de cada nota e mostrar a m�dia ponderada.
(nota 1 * peso da nota 1) + (nota 2 * peso da nota 2)
C�lculo da M�dia Ponderada = soma dos pesos

 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float nota1,nota2,peso1,peso2;
 	float media;
 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite a nota 1: ");	 	
	scanf("%f",&nota1);
	
	printf("\n\nDigite o peso da nota 1: ");	 	
	scanf("%f",&peso1);
 		
	printf("\n\nDigite a nota 2: ");	 	
	scanf("%f",&nota2);
	
	printf("\n\nDigite o peso da nota 2: ");	 	
	scanf("%f",&peso2);
	 		
	media=((peso1*nota1)+(peso2*nota2))/(peso1+peso2);
	 
	printf("\n\nO resultado da opera��o �: %.2f.", media);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
