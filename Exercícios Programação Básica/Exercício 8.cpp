#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 8. Dado o raio de uma circunferência calcule sua área (math.h)
 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float raio;
 	float area;
 	 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite o raio da circunferência: ");
	 	
	scanf("%f",&raio);
 		
	
	
	area=M_PI*pow(raio,2); 
	 
	printf("\n\nA área da circunferência é aproximadamente: %.2f unidades de área", area);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
