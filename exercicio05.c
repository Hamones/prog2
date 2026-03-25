#include <stdio.h>
#include <unistd.h>
#include <string.h>


typedef struct{
	char id[10];
	int stats;
	int criminalidade;
	cidadao* prox;
	cidada* ant;
}cidadao;


int main()
{
//Iniciar dados.
	struct cidadao cidade[1000];
	for (int i = 0; i < N; i++)
		cidade[i]=criar_cidadao();
//resolução da questão 1
//	Imprimir a quantidade cidadãos
//		printf("Quantade de cidadãos: %d", tam);
//resolução da questão 2
//	Imprimir as habilidades de todos os cidadoes
//resolução da questão 3
//	A quantidade de cidadãos com níveis de criminalidade acima de 5

	return 0;
}
