#include <stdio.h>
#include <string.h>

void preenche(FILE* f, char* s){
	int x,i,j;
	for(i=0;i<10;i++){
    	scanf("%s",s);
    	x=strlen(s);
    	for(j=0;j<x;j++){
        	fputc(s[j],f); 
    	}
		  fputc(' ',f);
	}
}
int main(void){
  char s[25],v[10];
	FILE* f=fopen("/home/ime/arq.txt","w");
	preenche(f,s);
	fclose(f);
  return 0;
}
