#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int chave, elem;
	struct No* dir;
	struct No* esq;
}No;
typedef struct Arvore{
	No* raiz;
}Arvore;
void Constroi(struct Arvore* t){
	t->raiz = NULL;
}
void PercursoPreOrdem(struct No* t){
	if(t != NULL){
		printf("%d ", t->chave);
		PercursoPreOrdem(t->esq);
		PercursoPreOrdem(t->dir);
	}
}
void PercursoPosOrdem(struct No* t){
	if(t != NULL){
		PercursoPosOrdem(t->esq);
		PercursoPosOrdem(t->dir);
		printf("% ", t->chave);
	}
}
void PercursoInOrdem(struct No* t){
	if(t != NULL){
		PercursoInOrdem(t->esq);
		printf("%d ", t->chave);
		PercursoInOrdem(t->dir);
	}
}
void Enumera(struct Arvore* t){
	PercursoInOrdem(t->raiz);
}
No* Busca(struct Arvore* t, int c, struct No** posIns){
	No* q;
	q = t->raiz;
	posIns = &(t->raiz);
	while(q != NULL){
		if(q->chave = c){
			return q;
		}
		else if(c < q->chave){
			q = q->esq;
			posIns = &(q->esq);
		}
		else{
			q = q->dir;
			posIns = &(q->dir);
		}
	}
	return NULL;
}
void Insere(struct Arvore* t, int c, int x){
	No** posIns;
	No* q;
	No* v;
	v = Busca(t, c, posIns);
	if(v == NULL){
		q = (No*)malloc(sizeof(No));
		*posIns = q;
		q->chave = c;
		q->elem = x;
		q->esq = NULL;
		q->dir = NULL;
	}
}
void Remove(struct Arvore* t, int c){
	No* q;
	No** pontQ;
	No* x;
	x = Busca(t, c, pontQ);
	if(x != NULL){
		q = *pontQ;
		if(q->esq != NULL){
			if(q->esq->dir = NULL){
				q->esq->dir = q->dir;
				*pontQ = q->esq;
			}
			else{
				No* qMenor;
				No* paiQmenor;
				qMenor = q->esq->dir;
				paiQmenor = q->esq;
				while(qMenor->dir != NULL){
					qMenor = qMenor->dir;
					paiQmenor = qMenor;
				}
				paiQmenor->dir = qMenor->esq;
				qMenor->esq = q->esq;
				qMenor->dir = q->dir;
				*pontQ = qMenor;
			}
		}
		else{
			*pontQ = q->dir;
		}
		free(q);
	}
}
int main(void){
	Arvore t;
	Constroi(&t);
	Insere(&t, 1, 1);
	Insere(&t, 2, 3);
	Insere(&t, 3, 5);
	Insere(&t, 4, 7);
	Insere(&t, 5, 9);
	Enumera(&t);
	Remove(&t, 2);
	Remove(&t, 4);
	Enumera(&t);
}
