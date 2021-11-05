#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação

/*6. Dado dois lados de um triangulo informe a área
 */
 
 //NOTA: Interpretei como a área do triângulo retângulo onde cada lado é um cateto, porque para cada tipo de triângulo tem uma forma diferente de calcular a área.
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float numero[2];
 	float area;
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %dº cateto de um triângulo retângulo: ",i+1);
	 	
	 	scanf("%f",&numero[i]);
 		
	 }
	
	area=(numero[0]*numero[1])/2; 
	 
	printf("\n\nA área do triângulo retângulo é: %.2f unidades de área", area);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
