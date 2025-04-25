//
// Created by adriano.lima on 25/04/25.
//

#include <stdlib.h>

#include "libprg/libprg.h"

#define CAPACIDADE_INICIAL 10

typedef struct fila {
    int* elementos;
    int inicio;
    int fim;
    int capacidade;
} fila_t;

fila_t* create_queue() {

    // Criar estrutura fila e alocar memória
    fila_t* fila = (fila_t*) malloc(sizeof(fila_t));

    // Alocar memória para os elementos da fila
    fila->elementos = (int*) malloc(sizeof(int) * CAPACIDADE_INICIAL);

    // Definir os valores iniciais da fila
    fila->inicio = 0;
    fila->fim = 0;
    fila->capacidade = CAPACIDADE_INICIAL;

    return fila;
}

// enqueue()
// dequeue()
// empty()
// full()
// size()
// head()
// tail()
// destroy_queue()