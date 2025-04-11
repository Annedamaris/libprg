#include <stdlib.h>

#include "libprg/libprg.h"

#define CAPACIDADE_INICIAL 10

typedef struct pilha {
    int* elementos;
    int topo;
    int capacidade;
} pilha_t;

pilha_t* criar_pilha() {

    // Criar a estrutura pilha e alocar memória
    pilha_t* pilha = (pilha_t*) malloc(sizeof(pilha_t));

    // Alocar memória para os elementos da pilha
    pilha->elementos = (int*) malloc(sizeof(int) * CAPACIDADE_INICIAL);

    // Definir os valores iniciais da pilha
    pilha->topo = -1;
    pilha->capacidade = CAPACIDADE_INICIAL;

    return pilha;
}
// push()
// pop()
// empty()
// size()