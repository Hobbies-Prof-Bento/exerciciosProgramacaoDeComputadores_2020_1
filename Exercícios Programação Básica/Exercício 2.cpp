#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação

/* 2. Leia dois números informe sua soma e sua subtração
 */
 

 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int numero[2];
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %dº número: ",i+1);
	 	
	 	scanf("%d",&numero[i]);
 		
	 }
	 
	printf("\n\nA soma entre os dois números é: %d", numero[0]+numero[1]);
 	
 	printf("\n\nA subtração entre os dois números é: %d", numero[0]-numero[1]);
 	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
