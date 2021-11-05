#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*3. Aloque uma área de memória com malloc para armazenar uma struct com nome e telefone (ambos vetor de char). 
Preencha os dados.
Imprima os dados.
 */

struct CONTATO
{
	char nome[30];
	char telefone[30];
};


int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	struct CONTATO *pessoa;
	
	pessoa=(struct CONTATO*)malloc(sizeof(struct CONTATO));
	
	printf("\n\nPor gentileza digite o nome do contato: ");
	scanf("%s",pessoa->nome);
	printf("\n\nAgora digite o telefone do contato: ");
	scanf("%s",pessoa->telefone);
	
	printf("O nome da pessoa alocado dentro do ponteiro é: %s", pessoa->nome);
	printf("\n\nA posisão do ponteiro é: %X", &pessoa->nome);
	printf("\nO nome da pessoa alocado dentro do ponteiro é: %s", pessoa->telefone);
	printf("\nA posisão do ponteiro é: %X", &pessoa->telefone);

	free(pessoa);
	
	printf("\n\n\n");
	
	system("pause");
	
	return 0;
	
}
