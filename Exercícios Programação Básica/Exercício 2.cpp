#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o

/* 2. Leia dois n�meros informe sua soma e sua subtra��o
 */
 

 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int numero[2];
 	int i=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %d� n�mero: ",i+1);
	 	
	 	scanf("%d",&numero[i]);
 		
	 }
	 
	printf("\n\nA soma entre os dois n�meros �: %d", numero[0]+numero[1]);
 	
 	printf("\n\nA subtra��o entre os dois n�meros �: %d", numero[0]-numero[1]);
 	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
