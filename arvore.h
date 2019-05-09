#import "pilha.h"

typedef struct noA{
    int info;
    struct noA *esq;
    struct noA *dir;
} Arvore;

Arvore *inicializa(void);
void imprime(Arvore *no, int tab);
Arvore *criaNo(int valor);
void espelho (Arvore *a);
int root(Arvore *no);


