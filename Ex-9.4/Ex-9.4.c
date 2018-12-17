#include<stdio.h>
#include<stdlib.h>

struct Caixa{
    int valor;
    struct Caixa* proximo;
};

void exibir(struct Caixa* caixa){
    while (caixa!=NULL){
           printf("%d->", caixa->valor);
           caixa=caixa->proximo;
    }
    printf("\n");
}

int main (void){
    struct Caixa c1;
    struct Caixa c2;
    struct Caixa c3;
    struct Caixa c4;
    struct Caixa c5;
    struct Caixa* cabeca=&c1;
    scanf("%d", &c1.valor);
    c1.proximo=&c2;
    scanf("%d", &c2.valor);
    c2.proximo=&c3;
    scanf("%d", &c3.valor);
    c3.proximo=&c4;
    scanf("%d", &c4.valor);
    c4.proximo=&c5;
    scanf("%d", &c5.valor);
    c5.proximo=NULL;
    exibir(cabeca);
    struct Caixa* t1;
    t1=(*cabeca).proximo;
    (*cabeca).proximo=(*t1).proximo;
    (*t1).proximo=NULL;
    exibir(cabeca);
    (*t1).proximo=cabeca;
    cabeca=t1;
    exibir(cabeca);
    return 0;
}
