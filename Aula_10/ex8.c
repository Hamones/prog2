#include <stdio.h>
#include <math.h>

#define TAM 5


void alterar_vetor( float *vetor, double (*funcao)(float *array)){

	for (int i = 0; i < TAM; i++){
		vetor++;
		 funcao(vetor);

}

int main (){
	float vetor[TAM] = {1.1,2.3,3.6,4.8,5.9};

	alterar_vetor(vetor, floor);
	
	for (int i= 0 ; i < TAM; i++)
		printf("%1.f",vetor[i]);

	return 0;
}
