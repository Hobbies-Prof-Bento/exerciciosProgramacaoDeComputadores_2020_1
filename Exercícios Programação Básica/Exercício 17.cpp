#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação
#include <math.h> //biblioteca para operações matemáticas

/* 17. Escreva um algoritmo para ler um valor inteiro em segundos, e depois converter e mostrá-lo no formato
hh:mm:ss.

 */
 
 //NOTA: Mudei para 12 quilômetros por litro.
 
 
 int main (){
 	
 	setlocale(LC_ALL,"portuguese");
 	
 	int hora, minuto, segundos;
 	 	
 	printf("BEM VINDO");
 	
 	printf("\n\nPor gentileza digitar um tempo em segundos: ");
 	scanf("%d",&segundos);
 	
 	hora=segundos/3600;
 	minuto = (segundos%3600)/60;
 	segundos = ((segundos%3600)%60);
 	
 	printf("\n\nO valor dos segundos digitados convertidos são: %dH %dwmin %dseg",hora,minuto,segundos);
   	
 	printf("\n\n\n");
 	
 	system("pause");
 	
	return 0;
 }
