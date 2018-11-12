#include <stdio.h>

struct Campeao{
    int vida;
    int mana;
    int dano;
    int habilidade;
};
struct Campeao2{
    int nivel;
    struct Campeao c;
};
void preenche(struct Campeao* c1){
    printf("Digite os atributos de seu campeao: ");
    scanf("%d %d %d %d",&((*c1).vida),&((*c1).mana),&((*c1).dano),&((*c1).habilidade));
}
void preenche2(struct Campeao2* c2){
    printf("Digite o nivel do seu campeao: ");
    scanf("%d",&((*c2).nivel));
    preenche((&(*c2).c));
} 
int main(void){
    struct Campeao2 c2;
    preenche2(&c2);
    printf("NIVEL: %d\n",c2.nivel);
    printf("VIDA: %d\n",c2.c.vida);
    printf("MANA: %d\n",c2.c.mana);
    printf("DANO: %d\n",c2.c.dano);
    printf("HABILIDADE: %d\n",c2.c.habilidade);
    return 0;
}
