#include <stdio.h>
#include <stlib.h>
#include <strg.h>
#define TAM 100

struct dicionario
{
	char palavra[TAM];
	int frequencia;
};


int main()
{
	struct palavra  dicionario[TAM];
	char nome_arquivo;
	char *token;
	FILE* arquivo;
	int maior_frequencia = 0;
	int tam_arquivo = 0;

	scanf("Digite o nome do arquivo: %99s", nome_arquivo);

	arquivo = fopen(nome_arquivo,"r");

	if (arquivo == NULL){
		printf("não há arquivo");
		return 0;
	}

	//iniciar dicionario
	for (int i = 0 ; i < TAM; i++)
	{
		dicionario[i].palavra = 0;
		dicionario[i].frequencia = 0;
	}
	
	char buffer[TAM];

	//capturar todas as palavras no dicionário.
	while (tam_arquivo <= arquivo_total) && (fscanf("arquivo,%99s,buffer")=!EOF)
	{
		dicionario[i].palavra = fscanf(arquivo,TAM);
		dicionario[i].frequencia = 0;
		
		if (dicionario[i].frequencia >  maior_frequencia)
			maior_frequencia++;
		tam_arquivo++;
	}

	//comparar as palvras mais frequentes.
	for (i =0; i < tam_arquivo; i++)
	{
		for (int j = 0; j < tam_arquivo; j++)
		{
			if (strcmp(dicionario.palavra[i], dicionario.palavra[j]) == 0)
				dicionario[i].frequencia++;
			if (dicionario.frequencia > maior_frequencia)
				maior_frequencia++;
		}
	}


	//escrever a palavra mais frequênte
	///acessar todas as palvras
	///guardar a palavra mais comum.
	while (dicionario.palavra[i] != EOF)
	{
		dicionario.frequencia == maior_frequencia;
		token = fget(dicionario.palavra[i]);
	}
	

	printf("A apalvra mais comum é:%99s",*token);


	fclose(arquivo);

	return 0;
}
