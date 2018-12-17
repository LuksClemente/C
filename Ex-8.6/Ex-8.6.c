#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa{
    int idade;
    char nome[25];
}Pessoa;
int main(void){
    int n;
    Pessoa vec[100];
    printf("Quantas pessoas?: ");
    scanf("%d",&n);
    FILE* f=fopen("/home/ime/arq1.bin","wb");
    fwrite(&n,sizeof(int),1,f);
    for(int i=0;i<n;i++){
        printf("Insira o nome: ");
        scanf("%s",vec[i].nome);
        printf("Insira a idade: ");
        scanf("%d",&vec[i].idade);
        fwrite(vec[i].nome,sizeof(char),(strlen(vec[i].nome))+1,f);
        fwrite(vec[i].nome,sizeof(int),1,f);
    }
    fclose(f);
    return 0;
}
