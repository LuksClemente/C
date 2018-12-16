#include <stdio.h>
#include <stdlib.h>

struct Jogador{
	int passe;
	int drible;
};
void preenche(struct Jogador* p1){
	printf("Quantos de passe[0-100]?: ");
	scanf("%d",&(*p1).passe);
	printf("Quanto de drible[0-100]?: ");
	scanf("%d",&(*p1).drible);
}
int main(void){
	struct Jogador player;
	preenche(&player);
	printf("PASSE: %d\n",player.passe);
	printf("DRIBLE: %d\n",player.drible);
	return 0;
}
