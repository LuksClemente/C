#include <stdio.h>
#include <stdlib.h>

int eh_primo(int n){
    int i, qtd=0;
    for (i=2;i<n;i++){
        if (n%i==0){
            qtd+=1;
        }
    }
    return qtd;
}
int main(void){
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	int x=eh_primo(num);
	if(x==0){
		printf("Numero primo");
	}else{
		printf("Nao primo");
	}
	return 0;
}
