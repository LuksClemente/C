#include <stdio.h>
#include <stdlib.h>

struct Cinema{
	int sala;
	int ingressos;
};
struct Filme{
	char nome[50];
	struct Cinema c;
};
void preenche(struct Cinema* cine){
	printf("Qual a sala do filme?: ");
	scanf("%d",&(*cine).sala);
	printf("Quantos ingressos?: ");
	scanf("%d",&(*cine).ingressos);
}
void preenche2(struct Filme* filme){
	printf("Digite o nome do filme: ");
	scanf("%s",(*filme).nome);
	preenche(&(*filme).c);
}
int main(void){
	struct Filme filme;
	preenche2(&filme);
	printf("NOME DO FILME: %s\n",filme.nome);
	printf("SALA: %d\n",filme.c.sala);
	printf("QTD INGRESSOS: %d\n",filme.c.ingressos);
	return 0;
}

