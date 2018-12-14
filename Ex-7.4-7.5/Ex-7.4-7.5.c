#include <stdio.h>
#include <stdlib.h>

struct Pos{
	int x;
	int y;
};
struct Pers{
	int id;
	struct Pos p;
	int score;
};
void posicao(struct Pos* p){
	printf("Digite a coordenadas X[0-9]: ");
	scanf("%d",&(*p).x);
	printf("Digite a coordenadas Y[0-9]: ");
	scanf("%d",&(*p).y);
}
void personagem(struct Pers* p1){
	printf("Digite o ID do personagem: ");
	scanf("%d",&(*p1).id);
	(*p1).score=0;
	posicao(&(*p1).p);
}
void Mapa(char map[10][10]){
	int i,j;
	char m[]=" ";
	map[0][0]=m[0];
	for(i=0;i<10;i++){
		map[i+1][0]=i;
		map[0][i+1]=i;
		for(j=0;j<10;j++){
			map[i+1][j+1]=m[0];
		}
	}
}
int main(void){
	struct Pers per[10];
	int i,j;
	for(i=0;i<10;i++){
		personagem(&per[i]);
	}
	char mapa[10][10];
	Mapa(mapa);
	for(i=0;i<10;i++){
		mapa[per[i].p.x+1][per[i].p.y+1]=per[i].id;
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(mapa[i][j]==32){
				printf("%c ",mapa[i][j]);
			}else{
				printf("%d ",mapa[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
