#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Aloque uma área de memória com malloc para armazenar um número inteiro. Insira nesta área de memória o número 27 e imprima.
Incremente o numero 27 usando o ponteiro e imprima o resultado.
Desaloque o endereço alocado. */


int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	int *numero;
	
	numero=(int*)malloc(sizeof(int));
	
	*numero=27;
	
	printf("O número inteiro alocado dentro do ponteiro é: %d", *numero);
	printf("\nA posisão do ponteiro é: %X", &numero);

	free(numero);
	
	printf("\n\n\n");
	
	system("pause");
	
	return 0;
	
}
