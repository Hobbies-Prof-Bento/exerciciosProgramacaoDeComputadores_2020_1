#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o
#include <math.h> //biblioteca para opera��es matem�ticas

/* 17. Escreva um algoritmo para ler um valor inteiro em segundos, e depois converter e mostr�-lo no formato
hh:mm:ss.

 */
 
 //NOTA: Mudei para 12 quil�metros por litro.
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int hora, minuto, segundos;
 	 	
 	printf("BEM VINDO");
 	
 	printf("\n\nPor gentileza digitar um tempo em segundos: ");
 	scanf("%d",&segundos);
 	
 	hora=segundos/3600;
 	minuto = (segundos%3600)/60;
 	segundos = ((segundos%3600)%60);
 	
 	printf("\n\nO valor dos segundos digitados convertidos s�o: %dH %dwmin %dseg",hora,minuto,segundos);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
