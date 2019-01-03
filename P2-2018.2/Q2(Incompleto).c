#include<stdio.h>
#include<stdlib.h>

struct Linha{
	char disciplina[25];
	char dias[7][25];
};
int main(void){
	int n1,n2,i,j;
	struct Linha v[100];
	FILE* f=fopen("E:/Documentos/LucasClemente/Listas-CC-UERJ/Linguagem-de-Programação-I/arq.txt","w");
	printf("Quantas disciplinas?: ");
	scanf("%d",&n1);
	fwrite(&n1,sizeof(int),1,f);
	for(i=0;i<n1;i++){
		printf("Insira a disciplina: ");
		scanf("%s",v[i].disciplina);
		printf("Quantos dias?: ");
		scanf("%d",&n2);
		fwrite(&n2,sizeof(int),1,f);
		for(j=0;j<n2;j++){
			printf("Digite um dia: ");
			scanf("%s",v[i].dias[j]);
		}
		fwrite(&v[i],sizeof(struct Linha),1,f);
	}
	fclose(f);
	return 0;
}
