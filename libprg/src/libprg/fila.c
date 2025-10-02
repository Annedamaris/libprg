
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct fila {
    int* elementos;
    int inicio;
    int fim;
    int capacidade;
    int tamanho;
} fila_t;


bool cheia(fila_t* fila) {
    return fila->tamanho == fila->capacidade;
}


fila_t* Criar_fila(int capacidade) {
    fila_t* f = (fila_t*)malloc(sizeof(fila_t));
    if (f == NULL) {
        perror("Erro ao alocar memória para a fila");
        exit(EXIT_FAILURE);
    }

    f->elementos = (int*)malloc(capacidade * sizeof(int));
    if (f->elementos == NULL) {
        perror("Erro ao alocar memória para os elementos");
        free(f);
        exit(EXIT_FAILURE);
    }

    f->inicio = 0;
    f->fim = 0;
    f->capacidade = capacidade;
    f->tamanho = 0; // Inicialmente, a fila está vazia

    return f;
}

void enfileirar(fila_t* fila, int valor) {
    if (cheia(fila)) {
        printf("Erro: A fila está cheia.\n");
        return;
    }

    fila->elementos[fila->fim] = valor;
    fila->fim = (fila->fim + 1) % fila->capacidade;
    fila->tamanho++;
}


void Destruir_fila(fila_t* fila) {
    if (fila == NULL) return;
    free(fila->elementos);
    free(fila);
}