#include<stdio.h>
#include<stdlib.h>

typedef struct No {
	int Elem;
	struct No * Prox;
} No;

No * Soma(No * Lx, No * Ly) {
    No * Ls = NULL;
    No *p, *q, *r; int c;
    int ax, ay, as;
    p = Lx; q = Ly;
    c = 0; r = NULL;
    while ((p != NULL) || (q != NULL) || (c > 0)) {
        if (p == NULL) {
            ax = 0;
        } else {
            ax = p->Elem;
		}
        if (q == NULL) {
            ay = 0;
        } else {
            ay = q->Elem;
		}
        as = ax + ay + c;
        c = as / 10;
        as = as % 10;
        No * novo;
        novo = (No *) malloc(sizeof(No));
        if (Ls == NULL) {
        	novo->Elem = as; novo->Prox = NULL; Ls = novo; r = novo;
    	} else {
        	novo->Elem = as; novo->Prox = NULL; r->Prox = novo; r = novo;
		}
        if (p != NULL) {
            p = p->Prox;
    	}
        if (q != NULL) {
            q = q->Prox;
    	}
	}
    return Ls;
}

void Insere(No ** L, int x) {
	No * novo;
	novo = (No *) malloc(sizeof(No));
	novo->Elem = x; novo->Prox = *L; *L = novo;
}


int main(void) {
	No * Lx = NULL; //Lx =  362; Lx -> 2 -> 6 -> 3
	No * Ly = NULL; //Ly = 1919; Ly -> 9 -> 1 -> 9 -> 1
	No * Ls;

	Insere(&Lx, 3); Insere(&Lx, 6); Insere(&Lx, 2);
	Insere(&Ly, 1); Insere(&Ly, 9); Insere(&Ly, 1);  Insere(&Ly, 9);

	Ls = Soma(Lx, Ly);
	
	No * p = Ls;
	while (p != NULL) {
		printf("%d ", p->Elem);  //Ls = 2281; Ls -> 1 -> 8 -> 2 -> 2
		p = p->Prox;
	}
	printf("\n");
	return 0;
}

