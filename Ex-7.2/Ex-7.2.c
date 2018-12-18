#include <stdio.h>
#include <stdlib.h>

struct Jogador{
	int passe;
	int drible;
};
struct Player{
	char nome[20];
	struct Jogador p;
};
void preenche(struct Jogador* p1){
	printf("Quantos de passe[0-100]?: ");
	scanf("%d",&(*p1).passe);
	printf("Quanto de drible[0-100]?: ");
	scanf("%d",&(*p1).drible);
}
void preenche2(struct Player* p1){
	printf("Nome do jogador: ");
	scanf("%s",(*p1).nome);
	preenche(&(*p1).p);
}
int main(void){
	struct Player player;
	preenche2(&player);
	printf("NOME: %s\n",player.nome);
	printf("PASSE: %d\n",player.p.passe);
	printf("DRIBLE: %d\n",player.p.drible);
	return 0;
}
