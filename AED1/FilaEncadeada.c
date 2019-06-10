#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int elem;
	struct No* prox;
}No;
typedef struct Fila{
	No* inicio;
	No* fim;
	int n;
}Fila;
void Constroi(struct Fila* f){
	f->inicio = NULL;
	f->fim = NULL;
	f->n = 0;
}
void Destroi(struct Fila* f){
	No* pt; 
	No* pprox;
	pprox = f->inicio;
	while(pprox != NULL){
		pprox = pprox->prox;
		pt = pprox;
		free(pt);
	}
}
int Proximo(struct Fila* f){
	return(f->inicio->elem);
}
void Enfileira(struct Fila* f, int x){
	No* novoNo;
	novoNo = (No*)malloc(sizeof(No));
	novoNo->elem = x;
	novoNo->prox = NULL;
	f->n++;
	if(f->inicio == NULL){
		f->inicio = novoNo;
		f->fim = novoNo;
	}
	else{
		f->fim->prox = novoNo;
		f->fim = novoNo;
	}
}
void Desenfileira(struct Fila* f){
	if(f->inicio != NULL){
		No* noARemover;
		int x;
		noARemover = f->inicio;
		x = f->inicio->elem;
		if(f->inicio == f->fim){
			f->inicio = NULL;
			f->fim = NULL;
		}
		else{
			f->inicio = f->inicio->prox;
		}
		free(noARemover);
		f->n--;
	}
}
void Exibe(struct Fila* f){
	No* pt;
	pt = f->inicio;
	while(pt != NULL){
		printf("%d ->", pt->elem);
		pt = pt->prox;
	}
	printf("\n");
}
int Tamanho(struct Fila* f){
	return f->n;
}
int main(void){
	Fila f;
	Constroi(&f);
	Enfileira(&f, 2);
	Enfileira(&f, 4);
	Enfileira(&f, 6);
	Enfileira(&f, 8);
	Enfileira(&f, 10);
	Exibe(&f);
	Desenfileira(&f);
	Desenfileira(&f);
	Exibe(&f);
}
