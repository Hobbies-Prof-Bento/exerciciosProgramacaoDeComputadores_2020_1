#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 14. Escrever um algoritmo para ler uma temperatura em Fahrenheit e apresentá-la convertida em graus
Centígrados.
						(Fahrenheit - 32) x 5
Fórmula: Centígrados = ----------------------------
									9


 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float fahrenheit,centigrafos; 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite a temperatura em fahrenheit: ");	 	
	scanf("%f",&fahrenheit);
	
		 		
	centigrafos=((fahrenheit-32)*5)/9;
	 
	printf("\n\nO Grau em centígrafos é: %.2fº.", centigrafos);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
