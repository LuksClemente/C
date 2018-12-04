#include <stdio.h>
#include <string.h>

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
    	FILE* f=fopen("/home/ime/campeaolol.txt","wb");
    	if (escolha==1){
        	fwrite(&c2.nome,sizeof(char),(strlen(c2.nome)+1),f);
    		fwrite(&c2.c.vida,sizeof(int),1,f);
    		fwrite(&c2.c.mana,sizeof(int),1,f);
    		fwrite(&c2.c.reg.dano,sizeof(int),1,f);
    	}if(escolha==2){
        	fwrite(&c2.nome,sizeof(char),(strlen(c2.nome)+1),f);
    		fwrite(&c2.c.vida,sizeof(int),1,f);
    		fwrite(&c2.c.mana,sizeof(int),1,f);
    		fwrite(&c2.c.reg.habilidade,sizeof(int),1,f);
	}
    	fclose(f);
    	FILE* g=fopen("/home/ime/campeaolol.txt","rb");
    	struct Campeao2 c3;
    	if(escolha==1){
        	fread(&c3.nome,sizeof(char),(strlen(c2.nome)+1),g);
        	fread(&c3.c.vida,sizeof(int),1,g);
        	fread(&c3.c.mana,sizeof(int),1,g);
        	fread(&c3.c.reg.dano,sizeof(int),1,g);
        	printf("NOME: %s\n",c3.nome);
    		printf("VIDA: %d\n",c3.c.vida);
    		printf("MANA: %d\n",c3.c.mana);
        	printf("DANO: %d\n",c3.c.reg.dano);
    	}
    	if(escolha==2){
        	fread(&c3.nome,sizeof(char),(strlen(c2.nome)+1),g);
        	fread(&c3.c.vida,sizeof(int),1,g);
        	fread(&c3.c.mana,sizeof(int),1,g);
        	fread(&c3.c.reg.habilidade,sizeof(int),1,g);
        	printf("NOME: %s\n",c3.nome);
    		printf("VIDA: %d\n",c3.c.vida);
    		printf("MANA: %d\n",c3.c.mana);
        	printf("HABILIDADE: %d\n",c3.c.reg.habilidade);
    	}
    	return 0;
}
