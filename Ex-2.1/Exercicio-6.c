#include <stdio.h>

int main (void){
	int n;
	int i;
	int soma=0;
	printf("Digite um limite para a soma: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		soma += pow(i,2);
	}
	printf("Resultado da soma = %d\n", soma);
	return 0;
}
