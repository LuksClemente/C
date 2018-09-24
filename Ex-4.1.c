#include <stdio.h>

int eh_primo(int n){
    int i, qtd=0;
    for (i=1;i<=n;i+=1){
         if(n%i==0){
              qtd+=1;
              }
    }if(qtd==2){
         printf("%d numero primo \n",n);
    }else{
         printf("%d nao primo \n",n);
    }
}
int main (void){
    int n;
    printf("Digite um numero: \n");
    scanf("%d",&n);
    int x=eh_primo(n);
    return 0;
}
