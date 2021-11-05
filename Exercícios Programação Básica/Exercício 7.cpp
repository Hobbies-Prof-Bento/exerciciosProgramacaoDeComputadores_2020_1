#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 7. Dado dois lados de um triangulo informe seu perímetro
 */
 
 //NOTA: Interpretei como o perímetro do triângulo retângulo onde cada lado é um cateto.
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float numero[2];
 	float hipotenusa;
 	float perimetro;
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %dº lado de um retângulo: ",i+1);
	 	
	 	scanf("%f",&numero[i]);
 		
	 }
	
	hipotenusa = sqrt(pow(numero[0],2)+pow(numero[1],2));
	perimetro=(numero[0]+numero[1]+hipotenusa); 
	 
	printf("\n\nO perímetro do retângulo é: %.2f unidades de medida", perimetro);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
