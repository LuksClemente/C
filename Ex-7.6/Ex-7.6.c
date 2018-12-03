#include <stdio.h>
#include <stdlib.h>

struct Campeao{
	int vida;
	int mana;	
	union{
		int dano;
    		int habilidade;
	}reg;
};
struct Campeao2{
    	char nome[50];
    	struct Campeao c;
};
void preenche(struct Campeao* c1,int esc){	
    	printf("DIGITE A VIDA DE SEU CAMPEÃO: ");
    	scanf("%d",&((*c1).vida));
    	printf("DIGITE A MANA DE SEU CAMPEÃO: ");
    	scanf("%d",&((*c1).mana));
    	if(esc==1){
    		printf("DIGITE O DANO DO SEU CAMPEÃO: ");
    		scanf("%d",&((*c1).reg.dano));
	}if(esc==2){
		printf("DIGITE A HABILIDADE DO SEU CAMPEÃO: ");
		scanf("%d",&((*c1).reg.habilidade));
	}
}
void preenche2(struct Campeao2* c2,int e){
    	printf("DIGITE O NOME DO SEU CAMPEAO: ");
    	scanf("%s",((*c2).nome));
    	preenche((&(*c2).c),e);
} 
int main(void){
	int escolha;
	printf("ESCOLHA ENTRE DANO OU HABILIDADE[1/2]: ");
    	scanf("%d",&escolha);
    	struct Campeao2 c2;
    	preenche2(&c2,escolha);
    	printf("NOME: %s\n",c2.nome);
    	printf("VIDA: %d\n",c2.c.vida);
    	printf("MANA: %d\n",c2.c.mana);
    	if (escolha==1){
    		printf("DANO: %d\n",c2.c.reg.dano);
    	}if(escolha==2){
    		printf("HABILIDADE: %d\n",c2.c.reg.habilidade);
	}
    	return 0;
}
