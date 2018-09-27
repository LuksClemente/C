#include <stdio.h>
#include <string.h>

void compra(int* conta,int valor){
	*conta=*conta-valor;
	printf(":::::SALDO ATUALIZADO:::::\nApós a compra: R$ %d,00\n",*conta);
}
int main(void){
	int compras[]={100,50,80,30,20};
	int minha_conta1,minha_conta2;
	int valor,i;
	int* conta;
	printf("Digite o valor da Conta 1: ");
    scanf("%d",&minha_conta1);
    printf("Digite o valor da Conta 2: ");
    scanf("%d",&minha_conta2);
    for(i=0;i<5;i++){
    	valor=compras[i];
    	if(minha_conta1>minha_conta2){
    		conta=&minha_conta1;
    		compra(conta,valor);
		}else{
			conta=&minha_conta2;
			compra(conta,valor);
		}
	}
	printf(":::::SALDO FINAL:::::\n");
    printf("Conta 1: R$ %d,00\nConta 2: R$ %d,00\n",minha_conta1,minha_conta2);
    return 0;
}
