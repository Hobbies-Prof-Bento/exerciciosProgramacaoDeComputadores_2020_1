#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o

/*6. Dado dois lados de um triangulo informe a �rea
 */
 
 //NOTA: Interpretei como a �rea do tri�ngulo ret�ngulo onde cada lado � um cateto, porque para cada tipo de tri�ngulo tem uma forma diferente de calcular a �rea.
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float numero[2];
 	float area;
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %d� cateto de um tri�ngulo ret�ngulo: ",i+1);
	 	
	 	scanf("%f",&numero[i]);
 		
	 }
	
	area=(numero[0]*numero[1])/2; 
	 
	printf("\n\nA �rea do tri�ngulo ret�ngulo �: %.2f unidades de �rea", area);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
