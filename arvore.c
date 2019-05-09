#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"


Arvore *inicializa(void) {
    return NULL;
}

void imprime(Arvore *no, int tab) {
    for (int i = 0; i < tab; i++) {
        printf("-");
    }
    if (no != NULL) {
        printf("%d\n", no->info);
        imprime(no->esq, tab + 2);
        printf("\n");
        imprime(no->dir, tab + 2);
    } else printf("vazio");
}
int root(Arvore *no){
    return no->info;
}

Arvore *criaNo(int valor) {
    Arvore *novo;
    novo = (Arvore *) malloc(sizeof(Arvore));
    novo->info = valor;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}







