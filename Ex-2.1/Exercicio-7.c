#include <stdio.h>
#include <string.h>

int main (void) {
	char nome[20], nomemais[20], nomemenos[20];
	int i=1, vit, emp, der, pts, P=0, p=1;
	while(i<=20){
		printf("Digite o nome do time %d: \n", i);
		scanf("%s", nome);
		printf("Digite o numero de vitorias: \n");
		scanf("%d", &vit);
		printf("Digite o numero de empates: \n");
		scanf("%d", &emp);
		printf("Digite o numero de derrotas: \n");
		scanf("%d", &der);
		pts = (vit*3) + emp;
		if(pts>P){
			P = pts;
			strcpy(nomemais,nome);
		}
		else{
			p = pts;
			strcpy(nomemenos,nome);
		}

		i+=1;
	}
	printf("Time %s tem mais pontos.\n", nomemais);
	printf("Time %s tem menos pontos.\n", nomemenos);
    return 0;
}
