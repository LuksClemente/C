#include <stdio.h>

int main (void){
	int dolar;
	printf("Digite o valor do celular em dolares: ");
	scanf("%d", &dolar);
	int reais=(3.17*dolar);
	if (reais>1000){
		printf("Mau negocio! Procure um celular mais barato.");
	}else{
		printf("Bom negocio!");
	}
	return 0;
}
