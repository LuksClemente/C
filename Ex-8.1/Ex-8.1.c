#include <stdio.h>
#include <string.h>

int main(void){
    char s[25];
    int x,i;
    scanf("%s",s);
    x=strlen(s);
    FILE* f=fopen("/tmp/arq.txt","w");
    for(i=0;i<x;i++){
        fputc(s[i],f);    
    }
    fclose(f);
    return 0;
}
