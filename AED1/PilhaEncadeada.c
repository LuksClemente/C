#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int elem;
	struct No* prox;
}No;
typedef struct Pilha{
	int n;
	No* inicio;
}Pilha;
void Constroi(struct Pilha* p){
	p->inicio = NULL;
	p->n = 0;
}
void Destroi(struct Pilha* p){
	No* pt; 
	No* pprox;
	pprox = p->inicio;
	while(pprox != NULL){
		pprox = pprox->prox;
		pt = pprox;
		free(pt);
	}
}
int Topo(struct Pilha* p){
	return(p->inicio->elem);
}
void Empilha(struct Pilha* p, int x){
	No* novoNo;
	novoNo = (No*)malloc(sizeof(No));
	novoNo->elem = x;
	novoNo->prox = p->inicio;
	p->inicio = novoNo;
	p->n++;
}
void Desempilha(struct Pilha* p){
	if(p->inicio != NULL){
		No* noARemover;
		int x;
		noARemover = p->inicio;
		x = p->inicio->elem;
		p->inicio = p->inicio->prox;
		p->n--;
		free(noARemover);
	}
}
void Exibe(struct Pilha* p){
	No* pt;
	pt = p->inicio;
	while(pt != NULL){
		printf("%d ->", pt->elem);
		pt = pt->prox;
	}
	printf("\n");
}
int Tamanho(struct Pilha* p){
	return p->n;
}
int main(void){
	Pilha p;
	int x;
	Constroi(&p);
	Empilha(&p, 2);
	Empilha(&p, 4);
	Empilha(&p, 6);
	Empilha(&p, 8);
	Empilha(&p, 10);
	Exibe(&p);
	Desempilha(&p);
	Desempilha(&p);
	Exibe(&p);
	
}
