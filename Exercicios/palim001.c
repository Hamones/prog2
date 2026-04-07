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

while (B != '\0')
B = B + sizeof(palavra);

while (*A = *B){
    A++;
    B--;
    if (B < A){
        printf("É palimdromo");
        break;
    }
    else
        printf("Não é palimdromo");
    
}

return 0;
}