#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

#include <stdbool.h>

#define CAPACIDADE_INICIAL 10

/*--- PILHA ---*/
typedef struct pilha pilha_t;
pilha_t* create_stack();
void push(pilha_t* pilha, int valor);
int pop(pilha_t* pilha);
bool empty(pilha_t* pilha);
int size(pilha_t* pilha);
void detroy_stack(pilha_t* pilha);

/*--- FILA ---*/
typedef struct fila fila_t;
fila_t* create_queue();
void enqueue(fila_t* fila, int valor);
int dequeue(fila_t* fila);
bool empty(fila_t* fila);
bool full(fila_t* fila);
int size(fila_t* fila);
int head(fila_t* fila);
int tail(fila_t* fila);
void destroy_queue(fila_t* fila);

/*--- LISTA ---*/
typedef struct lista lista_t;
lista_t* create_list();
void add(lista_t* lista, int valor);

#endif
