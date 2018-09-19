#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char temps[50];
	short tempr,i,soma=0,media,j,qtd;
	for(i=0;i<=49;i++){
		printf("Digite uma temperatuta entre -100°C e 100°C: \n");
		scanf("%hd",&tempr);
		temps[i]=tempr;
		if(tempr<(-100)||(tempr>100)){
			printf("Temperatura invalida!");
			i--;
				
		}else{
			soma=soma+tempr;
		}
	}
	media=soma/50;
	for(j=0;j<=49;j++){
		if (temps[j]>media){
			qtd++;
		}
	}
	printf("Media: %hd. \n",media);
	printf("%d temperaturas estão acima da media",qtd);
	return 0;
	
	
}
