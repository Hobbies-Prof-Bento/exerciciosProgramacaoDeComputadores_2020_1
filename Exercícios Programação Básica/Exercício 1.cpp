#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação

/* 1. Leia dois dados do teclado em duas variáveis distintas, inverta seu valor e imprima
 */
 
 //NOTA: Pelo que entendi, é para ler em uma ordem e imprimir em ordem diferente
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int numero[2];
 	int i=0, j=0;
 	
 	printf("BEM VINDO");
 	
 	for(i=0;i<2;i++)
	 {
	 	
	 	printf("\n\nDigite o %dº número: ",i+1);
	 	
	 	scanf("%d",&numero[i]);
 		
	 }
	 
	for(j=1;j>=0;j--)
	 {
	 	
	 	printf("\n\nO %dº número digitado foi: %d",j+1,numero[j]);
	 }
 	
 	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
