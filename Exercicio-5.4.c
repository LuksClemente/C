#include <stdio.h>

void troca(int* a,int* b){
	int ptr;
	ptr=*a;
	*a=*b;
	*b=ptr;
}
int main(void){
	int x=10;
	int y=20;
	printf(":::::VALORES ORIGINAIS:::::\n");
	printf("Valor de X: %d\nValor de Y: %d\n",x,y);
	troca(&x,&y);
	printf(":::::VALORES TROCADOS:::::\n");
	printf("Valor de X: %d\nValor de Y: %d\n",x,y);
	return 0;
}
