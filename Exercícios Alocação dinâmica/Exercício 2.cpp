#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3. Aloque uma área de memória com malloc para armazenar uma struct com nome e telefone (ambos vetor de char). 
Preencha os dados.
Imprima os dados.

. */


int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	int *numero[5];
	int i=0,j=0, k=0;
	
	printf("SEJA BEM VINDO");
	
	for(i=0;i<5;i++)
	{
	
		numero[i]=(int*)malloc(sizeof(int));
	
	}
	
	for(j=0;j<5;j++)
	
	{
		printf("\nDigite o valor para o ponteiro de posição %d: ",j+1);
		
		scanf("%d",numero[j]);
	}
	
	for(k=0;k<5;k++)
	{
		
		printf("\nO número inteiro alocado dentro do ponteiro %d é: %d",k+1,*numero[k]);
		printf("\nA posisão do ponteiro %d é: %X",k+1, &numero[k]);
				
	}
	
	free(numero);
	printf("\n\n\n");
	
	system("pause");
	
	return 0;
	
}
