#include <stdio.h>

void compra(int* conta,int valor){
    *conta=*conta-valor;
    printf(":::::SALDO ATUALIZADO:::::\nApós a compra: R$ %d,00\n",*conta);
}
int main(void){
    int minha_conta1,minha_conta2;
    int valor=500;
    int* conta;
    printf("Digite o valor da Conta 1: ");
    scanf("%d",&minha_conta1);
    printf("Digite o valor da Conta 2: ");
    scanf("%d",&minha_conta2);
    if(minha_conta1>minha_conta2){
        conta=&minha_conta1;
        compra(conta,valor);
    }else{
        conta=&minha_conta2;
        compra(conta,valor);
    }
    printf(":::::SALDO FINAL:::::\n");
    printf("Conta 1: R$ %d,00\nConta 2: R$ %d,00\n",minha_conta1,minha_conta2);
    return 0;
}
