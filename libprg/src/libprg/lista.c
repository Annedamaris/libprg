//
// Created by adriano.lima on 06/05/25.
//

#include <stdlib.h>
#include "libprg/libprg.h"

typedef struct lista {
    int* elementos;
    int tamanho;
    int capacidade;
} lista_t;

lista_t* create_list() {
    // Criar estrutura lista e alocar memória
    lista_t *lista = (lista_t *) malloc(sizeof(lista_t));

    // Alocar memória para os elementos da lista
    lista->elementos = (int *) malloc(sizeof(int) * CAPACIDADE_INICIAL);

    // Definir os valores iniciais da lista
    lista->tamanho = 0;
    lista->capacidade = CAPACIDADE_INICIAL;

    return lista;
}

void add(lista_t* lista, int valor) {

    lista->elementos[lista->tamanho] = valor;
    lista->tamanho++;
}

// remove
// busca
// destroi
// tamanho
// cheia
// capacidade
// vazia