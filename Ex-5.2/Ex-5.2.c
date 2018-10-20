#include <stdio.h>
#include <stdlib.h>

void compra(int* conta,int valor){
	*conta-=valor;
}
int main(void){
	int minha_conta1,minha_conta2,valor=500;
	int* conta;
	printf(":::::INSERIR DADOS:::::\n");
	printf("Digite o valor da conta[1]: ");
	scanf("%d",&minha_conta1);
	printf("Digite o valor da conta[2]: ");
	scanf("%d",&minha_conta2);
	printf("::::::SALDO FINAL::::::\n");
	if(minha_conta1>minha_conta2){
		conta=&minha_conta1;
		compra(conta,valor);
	}else if(minha_conta1<minha_conta2){
		conta=&minha_conta2;
		compra(conta,valor);
	}else{
		printf("Compra nao realizada\n");
	}
	printf("Saldo Conta[1]: R$%d,00\nSaldo Conta[2]: R$%d,00",minha_conta1,minha_conta2);
	return 0;
}
