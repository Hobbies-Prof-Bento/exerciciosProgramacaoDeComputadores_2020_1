#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o

/* 3. 4. Dado dois lados de um quadrado informe a �rea
 */
 
 //NOTA: Interpretei como a �rea do ret�ngulo, porque para a �rea do uadrado � necess�rio apelas um lado.
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float numero[2];
 	float area;
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %d� lado de um ret�ngulo: ",i+1);
	 	
	 	scanf("%f",&numero[i]);
 		
	 }
	
	area=(numero[0]*numero[1]); 
	 
	printf("\n\nA �rea do ret�ngulo �: %.2f unidades de �rea", area);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
