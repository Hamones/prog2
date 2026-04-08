#include <stdio.h>
#include <stdlib.h>
#include <strig.h>



int main(){
char palavra[TAM]; //ponto que pode gerar problemas
char *A;
char *B;

A = &palavra;
B = &palavra;


fgets(palavra,sizeof(palavra),stdin);

while (B != '\0') //torna TAM irrelevante.
B = B + sizeof(palavra);

while (*A == *B) && (A < B){
    A++;
    B--;
}




return 0;
}