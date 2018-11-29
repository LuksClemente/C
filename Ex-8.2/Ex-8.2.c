#include <stdio.h>
#include <string.h>

int main(void){
    int i,qtd=0;
    char ch;    
    FILE* f=fopen("/tmp/arq.txt","r");
    while((ch=fgetc(f)) != EOF){
        fprintf(f,"%c",ch);
        fprintf(stdout,"%c",ch);
    }
    printf("\n");
    fclose(f);
    return 0;
}
