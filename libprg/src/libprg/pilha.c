#include "libprg/libprg.h"

#define CAPACIDADE_INICIAL 10

typedef struct pilha {
    int* elementos;
    int topo;
    int capacidade;
} pilha_t;
