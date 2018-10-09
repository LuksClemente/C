#include <stdio.h>

void preenche(int arr[][100],int l,int c){
	int i,j;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("Escreva o valor[%d][%d]",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}
int media(int arr[][100],int l,int c){
	int i,j;
	int soma=0;
	printf(":::::VALORES:::::\n");
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
			soma+=arr[i][j];	
		}
		printf("\n");
	}
	printf(":::::::SOMA::::::\n");
	printf("Valor da soma: %d\n",soma);
	int medium=(soma/(l*c));
	return medium;
}
int main(void){
	int medium=0;
	int l,c;
	int vec[100][100];
	printf("Digite o numero de linhas: ");
	scanf("%d",&l);
	printf("Digite o numero de colunas: ");
	scanf("%d",&c);
	preenche(vec,l,c);
	medium=media(vec,l,c);
	printf("::::::MEDIA::::::\n");
	printf("Valor da media: %d\n",medium);
	return 0;
}
