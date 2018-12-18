#include <stdio.h>
#include <string.h>
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
    	FILE* f=fopen("E:/Documentos/Lucas Clemente/Listas CC UERJ/Linguagem de Programação I/arq.txt","wb");
    	fwrite(&player.nome,sizeof(char),(strlen(player.nome)+1),f);
    	fwrite(&player.p.passe,sizeof(int),1,f);
    	fwrite(&player.p.drible,sizeof(int),1,f);
		if (escolha==1){
    		fwrite(&player.p.posicao.finalizacao,sizeof(int),1,f);
    	}if(escolha==2){
    		fwrite(&player.p.posicao.defesa,sizeof(int),1,f);
	}
    	fclose(f);
    	FILE* g=fopen("E:/Documentos/Lucas Clemente/Listas CC UERJ/Linguagem de Programação I/arq.txt","rb");
    	struct Player player2;
    	fread(&player2.nome,sizeof(char),(strlen(player.nome)+1),g);
        fread(&player2.p.passe,sizeof(int),1,g);
        fread(&player2.p.drible,sizeof(int),1,g);
        printf("NOME: %s\n",player2.nome);
        printf("PASSE: %d\n",player2.p.passe);
        printf("DRIBLE: %d\n",player2.p.drible);
		if(escolha==1){
        	fread(&player2.p.posicao.finalizacao,sizeof(int),1,g);
        	printf("FINALIZACAO: %d\n",player2.p.posicao.finalizacao);
    	}
    	if(escolha==2){
        	fread(&player2.p.posicao.defesa,sizeof(int),1,g);
        	printf("DEFESA: %d\n",player2.p.posicao.defesa);
    	}
    	return 0;
}
