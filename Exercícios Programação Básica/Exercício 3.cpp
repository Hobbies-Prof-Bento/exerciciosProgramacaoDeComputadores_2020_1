#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o

/* 3. Leia dois n�meros e informe a m�dia
 */
 

 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float numero[2];
 	float media;
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %d� n�mero: ",i+1);
	 	
	 	scanf("%f",&numero[i]);
 		
	 }
	
	media=(numero[0]+numero[1])/2; 
	 
	printf("\n\nA m�dia entre os dois n�meros �: %.2f", media);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
