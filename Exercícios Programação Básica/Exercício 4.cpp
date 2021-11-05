#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação

/* 3. 4. Dado dois lados de um quadrado informe a área
 */
 
 //NOTA: Interpretei como a área do retângulo, porque para a área do uadrado é necessário apelas um lado.
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float numero[2];
 	float area;
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %dº lado de um retângulo: ",i+1);
	 	
	 	scanf("%f",&numero[i]);
 		
	 }
	
	area=(numero[0]*numero[1]); 
	 
	printf("\n\nA área do retângulo é: %.2f unidades de área", area);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
