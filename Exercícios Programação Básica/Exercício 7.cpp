#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 7. Dado dois lados de um triangulo informe seu per�metro
 */
 
 //NOTA: Interpretei como o per�metro do tri�ngulo ret�ngulo onde cada lado � um cateto.
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float numero[2];
 	float hipotenusa;
 	float perimetro;
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %d� lado de um ret�ngulo: ",i+1);
	 	
	 	scanf("%f",&numero[i]);
 		
	 }
	
	hipotenusa = sqrt(pow(numero[0],2)+pow(numero[1],2));
	perimetro=(numero[0]+numero[1]+hipotenusa); 
	 
	printf("\n\nO per�metro do ret�ngulo �: %.2f unidades de medida", perimetro);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
