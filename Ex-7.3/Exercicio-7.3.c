#include <stdio.h>
#include <math.h>

typedef struct guardar{
	int x,y;
}ponto;
ponto preencher(int x,int y){
	ponto p;
	p.x=x;
	p.y=y;
	return p;
}
void vetor(ponto vector[]){
	int x,y,i;
	ponto valor;
	printf(":::::COORDENADAS:::::\n");
	for(i=0;i<=10;i++){
		printf("\nEscreva a coordenada X: ");
		scanf("%d",&x);
		printf("Escreva a coordenada Y: ");
		scanf("%d",&y);
		valor=preencher(x,y);
		vector[i]=valor;
	}
}
void distancia(ponto vector[]){
	int i;
	double maior=0;
	double dist;
	ponto distante;
	for(i=0;i<10;i++){
		dist=0;
		dist=sqrt(pow(vector[i].x,2)+pow(vector[i].y,2));
		if(dist>maior){
			maior=dist;
			distante.x=vector[i].x;
			distante.y=vector[i].y;
		}
	}
	printf("::::::RESULTADO::::::\n");
	printf("Ponto mais distante de O(0,0): P(%d,%d)\n",distante.x,distante.y);
}
int main(void){
	ponto vec[10];
	ponto pt;
	pt=preencher(0,0);
	vetor(vec);
	distancia(vec);
	return 0;	
}
