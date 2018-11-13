#include <stdio.h>
#include <stdlib.h>

struct Campeao{
    int vida;
    int mana;
    int dano;
    int habilidade;
};
struct Campeao2{
    char nome[50];
    struct Campeao c;
};
void preenche(struct Campeao* c1){
    printf("DIGITE OS ATRIBUTOS DO SEU CAMPEÃO[VIDA/MANA/DANO/HABILIDADE]: ");
    scanf("%d %d %d %d",&((*c1).vida),&((*c1).mana),&((*c1).dano),&((*c1).habilidade));
}
void preenche2(struct Campeao2* c2){
    printf("DIGITE O NOME DO SEU CAMPEAO: ");
    scanf("%s",((*c2).nome));
    preenche((&(*c2).c));
} 
int main(void){
    struct Campeao2 c2;
    preenche2(&c2);
    printf("NOME: %s\n",c2.nome);
    printf("VIDA: %d\n",c2.c.vida);
    printf("MANA: %d\n",c2.c.mana);
    printf("DANO: %d\n",c2.c.dano);
    printf("HABILIDADE: %d\n",c2.c.habilidade);
    return 0;
}
