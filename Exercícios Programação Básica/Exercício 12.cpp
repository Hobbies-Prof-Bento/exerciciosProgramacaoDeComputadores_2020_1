#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 12. Faça um programa que mostre o resultado da expressão:(( x - 5) * y) - z
Obs: Ler valores para as variáveis x, y e z.


 */
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int x,y,z;
 	int operacao;
 	
 	
 	printf("BEM VINDO");
 	
 	printf("\n\nDigite um número inteiro x: ");	 	
	scanf("%d",&x);
	
	printf("\n\nDigite um número inteiro y: ");	 	
	scanf("%d",&y);
 		
	printf("\n\nDigite um número inteiro z: ");	 	
	scanf("%d",&z);
	 		
	operacao=((x-5)*y)-z;
	 
	printf("\n\nO resultado da operação é: %d.", operacao);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
