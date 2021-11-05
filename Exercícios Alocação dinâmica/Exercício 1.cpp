#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Aloque uma �rea de mem�ria com malloc para armazenar um n�mero inteiro. Insira nesta �rea de mem�ria o n�mero 27 e imprima.
Incremente o numero 27 usando o ponteiro e imprima o resultado.
Desaloque o endere�o alocado. */


int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	int *numero;
	
	numero=(int*)malloc(sizeof(int));
	
	*numero=27;
	
	printf("O n�mero inteiro alocado dentro do ponteiro �: %d", *numero);
	printf("\nA posis�o do ponteiro �: %X", &numero);

	free(numero);
	
	printf("\n\n\n");
	
	system("pause");
	
	return 0;
	
}
