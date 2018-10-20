#include <stdio.h>
#include <stdlib.h>

void compra(int* conta,int valor){
	*conta-=valor;
}
int main(void){
	int compras[]={100,50,80,30,20};
	int minha_conta1,minha_conta2,i,valor;
	int* conta;
	printf(":::::INSERIR DADOS:::::\n");
	printf("Digite o valor da conta[1]: ");
	scanf("%d",&minha_conta1);
	printf("Digite o valor da conta[2]: ");
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
		printf("::::::SALDO FINAL::::::\n");
		printf("Saldo Conta[1]: R$%d,00\nSaldo Conta[2]: R$%d,00\n",minha_conta1,minha_conta2);
	}
	return 0;
}
