#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,b;
	int* p;
	printf("Digite um valor: ");
	scanf("%d",&a);
	printf("Digite outro valor: ");
	scanf("%d",&b);
	printf(":::::VALORES ORIGINAIS:::::\n");
	printf("[a]=%d\n[b]=%d\n",a,b);
	if(a>b){
		p=&a;
		*p=a-50;
		printf(":::::VALORES ALTERADOS:::::\n");
		printf("[a]=%d\n[b]=%d\n",*p,b);
	}else if(a<b){
		p=&b;
		*p=b-50;
		printf(":::::VALORES ALTERADOS:::::\n");
		printf("[a]=%d\n[b]=%d\n",a,*p);
	}else{
		printf(":::::VALORES ALTERADOS:::::\n");
		printf("Valores iguais, alteracao nao possivel");
	}
	return 0;
}
