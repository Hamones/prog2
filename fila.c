// Tipo abstrato de dado "fila de inteiros"
// Prof. Carlos Maziero - DINF/UFPR, Out 2024
// Implementação com Vetor Circular (Arranjo)

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// Cria uma fila vazia com a capacidade informada e a retorna;
struct fila_t *fila_cria (int capacidade)
{
    if (capacidade <= 0) return NULL;

    struct fila_t *f = (struct fila_t*) malloc(sizeof(struct fila_t));
    if (f == NULL) return NULL;

    f->dados = (int*) malloc(sizeof(int) * capacidade);
    if (f->dados == NULL) {
        free(f);
        return NULL;
    }

    f->capacidade = capacidade;
    f->tamanho = 0;
    f->inicio = 0;
    f->fim = 0;

    return f;
}

// Remove todos os elementos da fila, libera memória e retorna NULL
struct fila_t *fila_destroi (struct fila_t *f)
{
    if (f != NULL) {
        if (f->dados != NULL) {
            free(f->dados);
        }
        free(f);
    }
    return NULL;
}

// Insere o elemento no final da fila (politica FIFO);
int fila_insere (struct fila_t *f, int elem)
{
    if (f == NULL) return -1;
    
    // Verifica se a fila está cheia
    if (f->tamanho == f->capacidade) return -1;

    // Insere na posição 'fim'
    f->dados[f->fim] = elem;

    // Atualiza o índice 'fim' circularmente
    f->fim = (f->fim + 1) % f->capacidade;
    
    f->tamanho++;

    return f->tamanho;
}

// Retira o elemento do inicio da fila (politica FIFO) e o devolve;
int fila_retira (struct fila_t *f, int *elem)
{
    if (f == NULL || elem == NULL) return -1;

    // Verifica se a fila está vazia
    if (f->tamanho == 0) return -1;

    // Recupera o valor do início
    *elem = f->dados[f->inicio];

    // Atualiza o índice 'inicio' circularmente
    f->inicio = (f->inicio + 1) % f->capacidade;

    f->tamanho--;

    return f->tamanho;
}

// Devolve o primeiro da fila, sem removê-lo
int fila_primeiro (struct fila_t *f, int *elem)
{
    if (f == NULL || elem == NULL) return -1;

    // Verifica se a fila está vazia
    if (f->tamanho == 0) return -1;

    *elem = f->dados[f->inicio];

    return f->tamanho;
}

// Retorna o tamanho da fila (número de elementos presentes)
int fila_tamanho (struct fila_t *f)
{
    if (f == NULL) return -1;
    return f->tamanho;
}

// Retorna a capacidade da fila (número máximo de elementos)
int fila_capacidade (struct fila_t *f)
{
    if (f == NULL) return -1;
    return f->capacidade;
}

// Imprime o conteúdo da fila do início ao fim
void fila_imprime (struct fila_t *f)
{
    if (f == NULL) return;

    int i, idx;
    // Percorre 'tamanho' vezes
    for (i = 0; i < f->tamanho; i++) {
        // Calcula o índice real baseado no deslocamento a partir do 'inicio'
        idx = (f->inicio + i) % f->capacidade;
        
        printf("%d", f->dados[idx]);
        
        // Imprime espaço se não for o último elemento
        if (i < f->tamanho - 1) {
            printf(" ");
        }
    }
}