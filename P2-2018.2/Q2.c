#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Linha{
    char disciplina[25];
    char dias[10];
}Linha;
typedef struct LinhaLida{
    char linhalida[50];
}LinhaLida;
int main(void){
    Linha linha[100];
    int i,j,k,l,n1,n2;
    FILE* f=fopen("arq.txt","w");
    printf("Quantas disciplinas?: ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        printf("Digite o nome da disciplina: ");
        scanf("%s",linha->disciplina);
        for(j=0;j<strlen(linha->disciplina);j++){
            fputc(linha->disciplina[j],f);
        }
        printf("Quantos dias?: ");
        scanf("%d",&n2);
        for(k=0;k<n2;k++){
            printf("Digite o nome do dia: ");
            scanf("%s",linha->dias);
            fprintf(f,", ");
            for(l=0;l<strlen(linha->dias);l++){
                fputc(linha->dias[l],f);
            }
        }
        fputc('\n',f);
    }
    fclose(f);
    LinhaLida lida;
    FILE* g=fopen("arq.txt","r");
    int n=0;
    lida.linhalida[n]=fgetc(g);
    while(lida.linhalida[n] != EOF){
        n++;
        lida.linhalida[n]=fgetc(g);
    }
    lida.linhalida[n]='\0';
    printf("%s",lida.linhalida);
    fclose(g);
    return 0;
}
