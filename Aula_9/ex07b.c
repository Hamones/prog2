//Construa uma lista com, no máximo 100 elmentos inteiros,
//baseada em arraym e as funções para inserir no início e remover do início,
//retornar o tamanho da lista entre outras. Elabora e execute um conjunto de testes para as funções da lista.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TAM 100

struct item{
	int nodo;
	int item *item_anterior;
};


void criar_fila(struct *item){
	int *a;
	a = malloc((sizeof(int)*TAM));

	if (!a){
		printf("Erro de alocação");
		return 0;
		}
	
	a->primeiro = item;
	a->anterior = NULL;

	return 1;
}
}

	
	


void inserir_fim(struct *item){
	
	while (item->anterior != NULL)
	item->anterior;
	
}

remover_inicio(){
}
movimentar elemetno(){
}

int main ()
{
	


	return 0;
}
