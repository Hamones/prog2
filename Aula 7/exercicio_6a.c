/*
 *Escreva um programa para listar o nome das primeiras N variáveis de ambiente recebidas pelo programa
 * */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //necessário para acessar a função getopt

int main (int argc, char **argv){
	
char next_option;

while ((next_option = getopt(argc, argv, "n::b:")) != -1) {
	switch (next_option) {
		case 'n':
			printf("executamos flag -n. Basta aprender o resto\n");
			printf("Valor de %s: %s\n", optarg, getenv(optarg));
		break;
		case 'a':
		break;
		default:
		perror("%Argumentos: -n[Quantidade de Variáveis -a[para todas as variávies] \n");
		return 1;
	}
}
return 0;
}

