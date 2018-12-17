#include<stdio.h>
#include<stdlib.h>


typedef struct Caixa {
    int valor;
    struct Caixa* proximo;
}Caixa;

int contem(struct Caixa* caixa,int n){
    while (caixa!=NULL){
           if(caixa->valor==n){
                return 1;
           }
           caixa=caixa->proximo;
    }
    return 0;
}

int main(void){
    Caixa* cabeca,c1;
    cabeca=NULL;
    int n;
    printf("Insira um valor para n: ");
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
    printf("Escolha o numero a buscar: ");
    scanf("%d",&n);
    int x=contem(cabeca,n);
    if(x==1){
        printf("Contem\n");
    }else{
        printf("Nao contem\n");
    }
    return 0;
}
