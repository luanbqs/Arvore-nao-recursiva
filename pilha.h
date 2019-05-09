#include<stdlib.h>
#include<stdio.h>
#include "arvore.h"


typedef struct pilha Pilha;
Pilha *criar();
void destruir(Pilha *p);
int topo(Pilha *p);
void empilhar(Pilha **tpRef, Arvore *a);
int tamanho (Pilha *p);
Arvore *desempilhar(Pilha** tpRef);
