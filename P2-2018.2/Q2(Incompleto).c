#include<stdio.h>
#include<stdlib.h>

typedef struct Linha{
	char disciplina[25];
	char dias[7][25];
}Linha;
int main(void){
	int n1,n2,n,i,j;
	Linha v[100];
	FILE* f=fopen("E:/Documentos/LucasClemente/Listas-CC-UERJ/Linguagem-de-Programação-I/arq.txt","w");
	fflush(f);
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
	FILE* g=fopen("E:/Documentos/LucasClemente/Listas-CC-UERJ/Linguagem-de-Programação-I/arq.txt","r");
	fread(&n,sizeof(int),1,g);
	for(i=0;i<n;i++){
		fread(&v[i],sizeof(struct Linha),1,g);
		v[i].disciplina[25]='\0';
		v[i].dias[7][25]='\0';
	}
	for(j=0;j<n;j++){
		printf("%s, %s",v[i].disciplina,v[i].dias);
	}
	fclose(g);
	return 0;
}
