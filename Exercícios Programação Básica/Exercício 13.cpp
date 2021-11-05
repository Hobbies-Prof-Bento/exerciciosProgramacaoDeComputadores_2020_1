#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 13. Fazer um algoritmo para ler duas notas, os pesos de cada nota e mostrar a média ponderada.
(nota 1 * peso da nota 1) + (nota 2 * peso da nota 2)
Cálculo da Média Ponderada = soma dos pesos

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
	 
	printf("\n\nO resultado da operação é: %.2f.", media);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
