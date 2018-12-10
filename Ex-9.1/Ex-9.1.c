#include <stdio.h>

int main(void){
	int vet[5],i,j,n=0;
	for(i=0;i<5;i++){
		printf("Digite o elemento[%d]: ",i);
		scanf("%d",&vet[i]);
	}
	for(i=0;i<5;i++){
		printf("%d ",vet[i]);
		n++;
	}
	printf("\n");
	printf("Digite a posição do elemento a ser removido: ");
	scanf("%d",&j);
	n--;
	for(i=j;i<n;i++){
		vet[i]=vet[i+1];
	}
	for(i=0;i<n;i++){
		printf("%d ",vet[i]);
	}
	printf("\n");
	return 0;
}
