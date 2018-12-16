#include <stdio.h>
#include <stdlib.h>

struct Jogador{
	int passe;
	int drible;
	union{
		int finalizacao;
		int defesa;
	}posicao;
};
struct Player{
	char nome[20];
	struct Jogador p;
};
void preenche(struct Jogador* p1,int esc){
	printf("Quantos de passe[0-100]?: ");
	scanf("%d",&(*p1).passe);
	printf("Quanto de drible[0-100]?: ");
	scanf("%d",&(*p1).drible);
	if(esc==1){
		printf("Quanto de finalizacao[0-100]: ");
		scanf("%d",&(*p1).posicao.finalizacao);
	}else{
		printf("Quanto de defesa[0-100]: ");
		scanf("%d",&(*p1).posicao.defesa);
	}
}
void preenche2(struct Player* p1,int e){
	printf("Nome do jogador: ");
	scanf("%s",(*p1).nome);
	preenche(&(*p1).p,e);
}
int main(void){
	int escolha;
	printf("Jogador de linha ou goleiro?[1/2]: ");
	scanf("%d",&escolha);
	struct Player player;
	preenche2(&player,escolha);
	printf("NOME: %s\n",player.nome);
	printf("PASSE: %d\n",player.p.passe);
	printf("DRIBLE: %d\n",player.p.drible);
	if(escolha==1){
		printf("FINALIZACAO: %d\n",player.p.posicao.finalizacao);
	}else{
		printf("DEFESA: %d\n",player.p.posicao.defesa);
	}
	return 0;
}
