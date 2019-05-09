#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define TAM_MAX 999

struct pilha{
    Arvore *a;
    struct pilha *next;

};

Pilha *criar(){
    Pilha *s = NULL;
}
void destruir(Pilha *p){
    free(p);
}
void empilhar(Pilha **tpRef, Arvore *a){
    Pilha* novo_tNode = (Pilha*) malloc(sizeof(Pilha));

    if(novo_tNode == NULL){

    }
    novo_tNode->a  = a;
    novo_tNode->next = (*tpRef);
    (*tpRef) = novo_tNode;

}



int tamanho (Pilha *tp)
{
    return (tp == NULL)? 1 : 0;
}

Arvore *desempilhar(Pilha** tpRef)
{
    Arvore *res;
    Pilha *tp;

    if(tamanho(*tpRef))
    {
        exit(0);
    }
    else
    {
        tp = *tpRef;
        res = tp->a;
        *tpRef = tp->next;
        return res;
    }
}


