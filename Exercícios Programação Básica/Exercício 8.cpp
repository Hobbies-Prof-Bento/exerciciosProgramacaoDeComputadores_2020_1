#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 8. Dado o raio de uma circunfer�ncia calcule sua �rea (math.h)
 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float raio;
 	float area;
 	 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite o raio da circunfer�ncia: ");
	 	
	scanf("%f",&raio);
 		
	
	
	area=M_PI*pow(raio,2); 
	 
	printf("\n\nA �rea da circunfer�ncia � aproximadamente: %.2f unidades de �rea", area);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
