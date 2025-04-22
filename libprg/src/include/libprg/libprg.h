#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

typedef struct pilha pilha_t;
pilha_t* create_stack();
void push(pilha_t* pilha, int valor);
int pop(pilha_t* pilha);
bool empty(pilha_t* pilha);
int size(pilha_t* pilha);
void destroy_stack(pilha_t* pilha);

#endif
