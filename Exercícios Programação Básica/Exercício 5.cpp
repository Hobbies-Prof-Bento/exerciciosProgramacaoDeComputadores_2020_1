#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o

/* 5. Dado dois lados de um quadrado informe seu per�metro
 */
 
 //NOTA: Interpretei como a per�metro do ret�ngulo, porque para a �rea do uadrado � necess�rio apelas um lado.
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float numero[2];
 	float perimetro;
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %d� lado de um ret�ngulo: ",i+1);
	 	
	 	scanf("%f",&numero[i]);
 		
	 }
	
	perimetro=(2*numero[0]+2*numero[1]); 
	 
	printf("\n\nA �rea do ret�ngulo �: %.2f unidades de medida", perimetro);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
