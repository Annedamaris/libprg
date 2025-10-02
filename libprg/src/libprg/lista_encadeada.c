
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no {
    int valor;
    struct no* proximo;
}
    no_t; no_t* criar_lista_encadeada (int valor) {
        no_t* no = malloc(sizeof(no_t));
        no->valor = valor; no->proximo = NULL;
        return no;
    }
no_t *criar_lista_encadeada_circular(int valor) {

    }
void adicionar(no_t **inicio, int valor) {
        no_t* novo_no = criar_lista_encadeada (valor);
        novo_no->proximo = inicio; inicio = novo_no;
        return inicio;
    }

void adicionar_circular(no_t* inicio, int valor) {
        no_t* novo_no = criar_lista_encadeada (valor);
        novo_no->proximo = inicio;

        no_t* ultimo = *inicio;
    }

no_t* buscar_lista_encadeada (no_t **inicio (int valor)); {

void remover(no_t** inicio, int valor) {
    no_t* atual = *inicio;
    no_t* anterior = NULL;

    while (atual) {
        if (atual->valor == valor) {
            if (anterior) {
                anterior->proximo = atual->proximo;
                {
                    else{
                        *inicio = atual->proximo;

                    }
                }
            }
        }
        free(atual);
        break;
    }

    void destruir_lista_encadeada(no_t** inicio) {
        no_t* atual = *inicio;

        while (atual) {
            no_t* proximo = atual->proximo;
            free(atual);
            if () break;;
            atual = proximo;
        }
    }





