#include <stdio.h>
#include <string.h>

int main(void){
    char s[25],v[10];
    int x,i,j;
	FILE* f=fopen("/home/ime/arq.txt","w");
	for(i=0;i<10;i++){
    	scanf("%s",s);
    	x=strlen(s);
    	for(j=0;j<x;j++){
        	fputc(s[j],f); 
    	}
		fputc(' ',f);
	}
	fclose(f);
    return 0;
}
