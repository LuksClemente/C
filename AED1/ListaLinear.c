#include<stdio.h>
#include<stdlib.h>

#define MAX_n 1000

typedef struct Aluno{
    int chave;
    int nome;
} Aluno;
typedef struct LL{
    Aluno L[100];
    int n;
} LL;
void constroi(LL* l){
    l->n=0;
}
void enumera(LL* l){
    int i;
    for (i=0;i<l->n;i++){
        printf("%d\n", l->L[i].chave);
    }
}
void insere(LL* l, int c, int nam){
    if (l->n <MAX_n){
        l->L[l->n].chave=c;
        l->L[l->n].nome=nam;
        l->n=l->n+1;
    }else{
        printf("Overflow\n");
    }
}
int main(){
    LL lista;
    constroi(&lista);
    insere(&lista,1,2);
    insere(&lista,2,4);
    insere(&lista,3,6);
    enumera(&lista);
    return 0;
}
