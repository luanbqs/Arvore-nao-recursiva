#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define bool int

void ordemSimetrica(Arvore *raiz)
{
    Arvore *atual = raiz;
    Pilha *p = criar();
    bool done = 0;
    while (!done){
    if(atual !=  NULL){
        empilhar(&p, atual);
        atual = atual->esq;
    }else
    {
    if (!tamanho(p)){
    atual = desempilhar(&p);
    printf("%d \n", atual->info);
    atual = atual->dir;
    }else
    done = 1;
    }
    }
}

/*
void posOrdem(Arvore *raiz){
    Arvore *atual = raiz;
    Pilha *p = criar();
    bool done = 0;
    while (!done){
        if((atual->esq) !=  NULL || (atual->dir) != NULL){
            empilhar(&p, atual);
            atual = atual->esq;
        }else{
            if (!tamanho(p)){
                if(topo(&p)!=atual){
                    empilhar(&p,atual);
                }
                desempilhar(&p);
                atual = &p;
                }
                if(!tamanho(p)){

                }else
                    done = 1;
            }

    }
  }

  */







int main()
{

    Arvore *raiz;
    raiz = criaNo(1);
    raiz->esq = criaNo(2);
    raiz->esq->dir = criaNo(3);
    raiz->esq->dir->dir = criaNo(4);
    raiz->esq->dir->dir->dir = criaNo(5);
    raiz->esq->dir->dir->dir->dir = criaNo(6);
    raiz->dir = criaNo(7);
    raiz->dir->esq = criaNo(8);
    raiz->dir->dir = criaNo(9);
    root(raiz);

    ordemSimetrica(raiz);




    return 0;
}
