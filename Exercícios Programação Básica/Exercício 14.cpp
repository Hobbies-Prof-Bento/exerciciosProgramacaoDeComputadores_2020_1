#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 14. Escrever um algoritmo para ler uma temperatura em Fahrenheit e apresent�-la convertida em graus
Cent�grados.
						(Fahrenheit - 32) x 5
F�rmula: Cent�grados = ----------------------------
									9


 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float fahrenheit,centigrafos; 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite a temperatura em fahrenheit: ");	 	
	scanf("%f",&fahrenheit);
	
		 		
	centigrafos=((fahrenheit-32)*5)/9;
	 
	printf("\n\nO Grau em cent�grafos �: %.2f�.", centigrafos);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
