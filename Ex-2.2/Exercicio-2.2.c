#include <stdio.h>

int main (void){
	int num1;
	int num2;
	printf("Escolha um numero: ");
	scanf("%d", &num1);
	printf("Escolha outro numero: ");
	scanf("%d", &num2);
	int i=num1;
	while (i<(num2+1)){
		printf("%d\n", i);
		i=i+1;
	}
	return 0;
}
