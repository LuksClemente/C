#include <stdio.h>

struct Caixa{
	int valor;
	struct Caixa* prox;
};
int main(void){
	struct Caixa c1,c2,c3,c4,c5;
	c1.valor=1;
	c1.prox=&c2;
	c2.valor=3;
	c2.prox=&c3;
	c3.valor=9;
	c3.prox=&c4;
	c4.valor=7;
	c4.prox=&c5;
	c5.valor=5;
	c5.prox=NULL;
	printf("%d->%d->%d->%d->%d\n",c1.valor,(c1.prox)->valor,(c2.prox)->valor,(c3.prox)->valor,(c4.prox)->valor);
}