#include <stdio.h>
#include <stdlib.h>
#include <strig.h>
#define TAM 20

//necessário para gerenciar o as palavras.
struct deque{
    struct palavra *inicio;
    struct deque *fim;
};

struct letra{
    struct letra *prox;
    struct letra *ant;
    char letra;
};

//Implementação de funções.
void criar_deque{
    
}

struct letra adicionar_letra(char letra, struct deque *deq){
    //bloco de criação do ponteiro.
    //serah que vale a pena transformar em um procedimento?
    struct letra a*;
    a = (char)malloc(sizeof(char)); //verificar se o tamanho está correto.
    if (!a)
        return 0;
    //Caso em que o deque está vazio. 
    if (deq->inicio == NULL)
        deq->inicio = a;
        deq->fim = a->prox
    else
        a vai ser enviado para 
    //Caso em que o deque está vazio.
    if (deq->fim == NULL)
        deq->fim = a; // a atribuição do ponteiro está correta?
    else
        deq->fim = a->fim;   

    return a:
}
char remover_inicio(){
    
}
char remover_final(){
    
}


int main(){
    char palavra[TAM]; //ponto que pode gerar problemas


    struct deque *deq; //serah que posso acessar esse deque 
    
    fgets(palavra,sizeof(palavra),stdin); //preferi assim para não causar maiores prioplemas.;
    
    while (palavra [i] != '\0'){ //torna TAM irrelevante. 
        letra = adicionar_letra(palavra[i], deq); // vai unir tanto no inicio como no final
        i++;
    }

    //estrutura da lógica que precisa ser alterada.
    while (A < B){
    if (*A != *B){
    break;
    printf("Não eh Palindromo");      
        A++;
        B--;
    }

    return 0;
}
