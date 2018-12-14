#include <stdio.h>
#include <stdlib.h>

struct Cinema{
	int sala;
	int ingressos;
};
void preenche(struct Cinema* cine){
	printf("Qual a sala do filme?: ");
	scanf("%d",&(*cine).sala);
	printf("Quantos ingressos?: ");
	scanf("%d",&(*cine).ingressos);
}
int main(void){
	struct Cinema cinema;
	preenche(&cinema);
	printf("SALA: %d\n",cinema.sala);
	printf("QTD INGRESSOS: %d\n",cinema.ingressos);
	return 0;
}
