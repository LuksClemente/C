#include <stdio.h>

struct Campeao{
    int vida;
    int mana;
    int dano;
    int habilidade;
};
void preenche(struct Campeao* c){
    int* v,m,d,h;
    printf("Digite os atributos de seu campeao: ");
    scanf("%d %d %d %d",&((*c).vida),&((*c).mana),&((*c).dano),&((*c).habilidade));
}   
int main(void){
    struct Campeao champ;
    preenche(&champ);
    printf("VIDA: %d\n",champ.vida);
    printf("MANA: %d\n",champ.mana);
    printf("DANO: %d\n",champ.dano);
    printf("HABILIDADE: %d\n",champ.habilidade);
    return 0;
}
