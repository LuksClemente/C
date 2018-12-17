#include<stdio.h>
#include<stdlib.h>


typedef struct Caixa {
    int valor;
    struct Caixa* proximo;
}Caixa;

int retira(struct Caixa* t1, int n){
    Caixa* t2;
    if(t1->valor==n){
        return 2;
    }
    while(t1->valor !=n){
        t2=t1;
        t1=t1->proximo;
    }
    t2->proximo=t1->proximo;
    t1->proximo=NULL;
    free(t1);
    return 1;
}


int contem(struct Caixa* caixa,int n){
    Caixa* t1;
    t1=caixa;
    while (caixa!=NULL){
           if(caixa->valor==n){
                int x=retira(t1,n);
                return x;
           }
           caixa=caixa->proximo;
    }
    return 0;
}

void exibe(struct Caixa* caixa){
    while (caixa!=NULL){
           printf("%d->", caixa->valor);
           caixa=caixa->proximo;
    }
    printf("\n");
}

int main(void){
    Caixa* cabeca,c1;
    cabeca=NULL;
    int n;
    printf("Insira um valor para n:");
    scanf("%d",&n);
    while (n!=-1){
        Caixa* novo;
        novo=(Caixa*) malloc(sizeof(Caixa));
        novo->valor=n;
        novo->proximo=NULL;
        if (cabeca!=NULL){
            Caixa* t1=cabeca;
            while(t1->proximo !=NULL){
                t1=t1->proximo;
            }
            t1->proximo=novo;
        }else{
            cabeca=novo;
        }
        printf("Insira outro valor para n: ");
        scanf("%d",&n);
    }
    exibe(cabeca);
    printf("Escolha o numero a buscar:\n");
    scanf("%d",&n);
    int x=contem(cabeca,n);
    if (x==2){
        Caixa* t3;
        t3= (Caixa*) malloc(sizeof(Caixa));
        t3=cabeca;
        cabeca=cabeca->proximo;
        free(t3);
        printf("Valor encontrado!\n");
        exibe(cabeca);
    }else if (x==1){
        printf("Valor encontrado!\n");
        exibe(cabeca);
    }else{
        printf("Nenhum valor removido\n");
    }
    return 0;
}
