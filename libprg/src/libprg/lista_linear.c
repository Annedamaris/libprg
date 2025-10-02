#include "libprog/libprog.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct lista_linear {
    int* elementos;
    int tamanho;
    int capacidade;
    bool ordenada;
} lista_linear_t;


lista_linear_t* criar_lista_linear(int capacidade, bool ordenada) {
    lista_linear_t* lista = malloc(sizeof(lista_linear_t));
    if (lista == NULL) return NULL;

    lista->elementos = malloc(sizeof(int) * capacidade);
    if (lista->elementos == NULL) {
        free(lista);
        return NULL;
    }

    lista->tamanho = 0;
    lista->capacidade = capacidade;
    lista->ordenada = ordenada;

    return lista;
}


void inserir_nao_ordenada(lista_linear_t* lista, int valor) {
    if (lista->tamanho < lista->capacidade) {
        lista->elementos[lista->tamanho++] = valor;
    }
}


void inserir_ordenada(lista_linear_t* lista, int valor) {
    if (lista->tamanho >= lista->capacidade) return;

    int i = lista->tamanho - 1;
    while (i >= 0 && lista->elementos[i] > valor) {
        lista->elementos[i + 1] = lista->elementos[i];
        i--;
    }
    lista->elementos[i + 1] = valor;
    lista->tamanho++;
}


int busca_linear(lista_linear_t* lista, int valor) {
    for (int i = 0; i < lista->tamanho; i++) {
        if (lista->elementos[i] == valor) {
            return i;
        }
    }
    return -1;
}


int busca_binaria(lista_linear_t* lista, int valor) {
    int inicio = 0, fim = lista->tamanho - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (lista->elementos[meio] == valor) return meio;
        else if (lista->elementos[meio] < valor) inicio = meio + 1;
        else fim = meio - 1;
    }
    return -1;
}


int buscar(lista_linear_t* lista, int valor) {
    if (lista->ordenada) {
        return busca_binaria(lista, valor);
    } else {
        return busca_linear(lista, valor);
    }
}


bool lista_cheia(const lista_linear_t* lista) {
    return lista->tamanho == lista->capacidade;
}
