#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

typedef struct pilha pilha_t;
pilha_t* criar_pilha();
void push(pilha_t* pilha, int valor);
int pop(pilha_t* pilha);

#endif
