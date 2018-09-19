#include <stdio.h>

int main (void){
	int num1;
	int num2;
	printf("Escolha um numero: ");
	scanf("%d", &num1);
	printf("Escolha outro numero: ");
	scanf("%d", &num2);
	if (num1>num2){
		printf("Maior numero %d\n", num1);
	}else{
		printf("Maior numero %d\n", num2);
	}
	return 0;
}
