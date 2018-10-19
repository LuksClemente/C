#include <stdio.h>

int main (void){
	int num1;
	int num2;
	printf("Escolha um numero: ");
	scanf("%d", &num1);
	printf("Escolha outro numero: ");
	scanf("%d", &num2);
	if(num2>num1){
		while (num1<(num2+1)){
			printf("%d\n", num1);
			num1=num1+1;
		}
	}else if(num1>num2){
		while (num2<(num1+1)){
			printf("%d\n",num2);
			num2=num2+1;
		}
	}else{
		printf("Valores iguais!");
	}
	return 0;
}
