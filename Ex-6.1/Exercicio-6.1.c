#include <stdio.h>
#include <stdlib.h>

void preenche(int* vec,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Digite o valor[%d]: ",i+1);
		scanf("%d",vec+i);
	}
}
float media(int* vec,int n){
	int i;
	float soma=0,med;
	for(i=0;i<n;i++){
		soma+=*(vec+i);
	}
	med=(soma/n);
	return med;
}
int main(void){
	int n,vec[100];
	printf(":::::INSERIR DADOS:::::\n");
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);
	preenche(vec,n);
	float x=media(vec,n);
	printf(":::::::::MEDIA:::::::::\n");
	printf("Valor da media: %.2f\n",x);
	printf(":::::::::::::::::::::::\n");
	return 0;
}
