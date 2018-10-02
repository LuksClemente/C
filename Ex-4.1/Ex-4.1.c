#include <stdio.h>

int eh_primo(int n){
    int i,qtd=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            qtd++;
        }
    }if(qtd==2){
        return 1;
    }else{
        return 0;
    }
}
int main(void){
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	int x=eh_primo(num);
	if(x==1){
        printf("Numero primo");
	}else{
        printf("Numero nao primo");
	}
	return 0;
}
