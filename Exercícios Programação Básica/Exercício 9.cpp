#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 9. Dado o raio de uma circunfer�ncia calcule sua circunfer�ncia (math.h)
 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float raio;
 	float circunferencia;
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite o raio da circunfer�ncia: ");
	 	
	scanf("%f",&raio);
 		
	
	
	circunferencia=2*M_PI*raio;
	 
	printf("\n\nO comprimento da circunfer�ncia � aproximadamente: %.2f unidades de �rea", circunferencia);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
