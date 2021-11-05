#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação

/* 3. Leia dois números e informe a média
 */
 

 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	float numero[2];
 	float media;
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %dº número: ",i+1);
	 	
	 	scanf("%f",&numero[i]);
 		
	 }
	
	media=(numero[0]+numero[1])/2; 
	 
	printf("\n\nA média entre os dois números é: %.2f", media);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
