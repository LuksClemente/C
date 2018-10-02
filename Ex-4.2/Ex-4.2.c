#include <stdio.h>

int eh_primo(int n){
    int i,qtd=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            qtd++;
        }
    }
    if(qtd==2){
        return 1;
    }else{
        return 0;
    }
}
void todos_os_primos(int n){
    printf(":::::NUMEROS:::::\n");
    while(n>0){
        int x=eh_primo(n);
        if(x==1){
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
