#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Pessoa {
    int idade;
    char nome[25];
}Pessoa;

int main(void){
    Pessoa v[100];
    int n;
    FILE* f= fopen("/home/ime/arq.bin", "rb");
    fread(&n, sizeof(int), 1, f);
    for (int i=0;i<n;i++){
        fread(&v[i],sizeof(struct Pessoa),1,f);
        v[i].nome[25]='\0';
    }
    for (int j=0;j<n;j++){
        printf("%d %s\n", v[j].idade, v[j].nome);
    }
    fclose(f);
    return 0;
}
