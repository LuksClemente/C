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
void todos_os_primos(int n){
	while(n>1){
		int x=eh_primo(n);
		if(x==0){
			printf("%d\n",n);
		}
		n--;
	}
}
int main(void){
	int max;
	printf("Digite um numero: ");
	scanf("%d",&max);
	todos_os_primos(max);
	return 0;
}
