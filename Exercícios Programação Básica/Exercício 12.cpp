#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 12. Fa�a um programa que mostre o resultado da express�o:(( x - 5) * y) - z
Obs: Ler valores para as vari�veis x, y e z.


 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int x,y,z;
 	int operacao;
 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite um n�mero inteiro x: ");	 	
	scanf("%d",&x);
	
	printf("\n\nDigite um n�mero inteiro y: ");	 	
	scanf("%d",&y);
 		
	printf("\n\nDigite um n�mero inteiro z: ");	 	
	scanf("%d",&z);
	 		
	operacao=((x-5)*y)-z;
	 
	printf("\n\nO resultado da opera��o �: %d.", operacao);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
