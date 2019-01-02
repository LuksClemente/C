#include<stdio.h>
#include<stdlib.h>

struct Aluno{
	float CR;
};
struct Professor{
	float salario;
	char unidade[5];
};
struct Funcionario{
	float salario;
};
struct Pessoa{
	char nome[20];
	int idade;
	union Categoria{
		struct Aluno aluno;
		struct Funcionario funcionario;
		struct Professor professor;
	}Categoria;
};
void preenchecomum(struct Pessoa* p){
	printf("Digite seu nome: ");
	scanf("%s",p->nome);
	printf("Digite sua idade: ");
	scanf("%d",&p->idade);
}
void preenche(struct Pessoa* pessoa,int esc){
	preenchecomum(pessoa);
	if(esc==1){
		printf("Digite seu CR: ");
		scanf("%f",&pessoa->Categoria.aluno.CR);
	}
	else if(esc==2){
		printf("Digite seu salario: ");
		scanf("%f",&pessoa->Categoria.professor.salario);
		printf("Digite a unidade: ");
		scanf("%s",pessoa->Categoria.professor.unidade);
	}
	else if(esc==3){
		printf("Digite seu salario: ");
		scanf("%f",&pessoa->Categoria.funcionario.salario);
	}
}
int main(void){
	int esc;
	struct Pessoa pessoa;
	printf("Escolha entre Aluno, Professor ou Funcionario[1/2/3]: ");
	scanf("%d",&esc);
	preenche(&pessoa,esc);
	printf("Nome: %s\n",pessoa.nome);
	printf("Idade: %d anos\n",pessoa.idade);
	if(esc==1){
		printf("C.R: %.2f\n",pessoa.Categoria.aluno.CR);
	}
	else if(esc==2){
		printf("Salario: R$ %.2f\n",pessoa.Categoria.professor.salario);
		printf("Unidade: %s\n",pessoa.Categoria.professor.unidade);
	}
	else if(esc==3){
		printf("Salario: R$ %.2f\n",pessoa.Categoria.funcionario.salario);
	}
	return 0;
}
