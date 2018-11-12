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
    printf("VIDA: %d\n",(*c).vida);
    printf("MANA: %d\n",(*c).mana);
    printf("DANO: %d\n",(*c).dano);
    printf("HABILIDADE: %d\n",(*c).habilidade);
}
int main(void){
    struct Campeao champ;
    preenche(&champ);
    return 0;
}
