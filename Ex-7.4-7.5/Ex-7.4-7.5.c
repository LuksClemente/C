#include <stdio.h>

struct Posicao{
	int x;
	int y;
};
struct Personagem{
	int id;
	struct Posicao s;
	int score;
};
void preenche(struct Posicao* s){
	printf("Digite x: ");
	scanf("%i",&s->x);
	printf("Digite y: ");
	scanf("%i",&s->y);
}
void preenche2(struct Personagem* p){
	int i;
	printf("Numero do participante: ");
	scanf("%i", &p->id);
	preenche(&p->s);
	p->score=0;
}
int main(void){
	struct Personagem per[10];
	int i;
	for (i=0;i<10;i+=1){
		preenche2(&per[i]);
	}
	return 0;
}
