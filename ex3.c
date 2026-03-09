#include <stdio.h>
#include <string.h>

#define tam 100;


int main()
{
	char string [tam];
	char separador[] = ",";
	char *token;

	printf("Escreva a linha desejada");
	scanf("%[^\n]",linha);
	getchar();
	
	do {
		token = strtok(turma[i], separador);
		printf("%s",token);
		turma[i]= token;
		i++;
		token = strtok(NULL, separador);
		printf("%c",token);
		turma[i] = token;
		i++;
	}while (token);

	struct aluno turma [1000][100];
	
	turma[i] = quebra_linha(CSV);

	return 0;
}


//leitura do CSV
//Alterar CSV

//adicionar valores à matriz.

for (int i = 0; i < 100; i++)
{
	turma[i] = separar_linha(CSV,separador);
}


//colocar todos em uma fila.
//adicionar valores de ordenação.


//adicionar valores à struct.


struct aluno{
	char	nome;
	char	idade;
	char 	nota;
	char	endereço;
}

