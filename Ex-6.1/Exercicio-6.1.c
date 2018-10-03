#include <stdio.h>

void preenche(int* vetor,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Digite um valor: ");
		scanf("%d",vetor+i);
	}
}
void media(int* vetor,int n){
	int soma=0, i;
	float medium;
	for(i=0;i<n;i++){
		soma+=*(vetor+i);
	}
	medium=(soma/n);
	printf(":::::::::::::::::::::::\n");
	printf("MEDIA DOS VALORES: %f\n",medium);
	printf(":::::::::::::::::::::::");
}
int main(void){
	int n,vetor[n];
	printf("Digite o numero de valores: ");
	scanf("%d",&n);
	preenche(vetor,n);
	media(vetor,n);
	return 0;	
}
