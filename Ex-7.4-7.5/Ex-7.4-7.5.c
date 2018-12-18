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
void mapa(struct Personagem* p, int n){
	int y=0,x=0,e=0;
	printf(" 0123456789\n");
	for(y=0;y<10;y++){
		printf("%d",y);
		for(x=0;x<10;x++){
			for(e=0;e<n;e++){
				if((p+e)->s.y==y && (p+e)->s.x==x){
					printf("%d",(p+e)->id);
					break;
				}
				else if(e==(n-1)){
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
int main(void){
	struct Personagem per[10];
	int i;
	for (i=0;i<10;i++){
		preenche2(&per[i]);
	}
	mapa(per,10);
	return 0;
}
