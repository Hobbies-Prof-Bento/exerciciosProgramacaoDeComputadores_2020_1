#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 9. Dado o raio de uma circunferência calcule sua circunferência (math.h)
 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float raio;
 	float circunferencia;
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite o raio da circunferência: ");
	 	
	scanf("%f",&raio);
 		
	
	
	circunferencia=2*M_PI*raio;
	 
	printf("\n\nO comprimento da circunferência é aproximadamente: %.2f unidades de área", circunferencia);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
