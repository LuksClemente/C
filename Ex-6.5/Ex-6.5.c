#include <stdio.h>
#include <string.h>

int strlen2(char* str){
    int i=0;
    while(1){
        if(*(str+i)=='\0'){
            break;
        }
        i++;
    }
    return i;
}
void strjoin(char* s,char* str1,char* str2){
    int i,j;
    int i1=strlen2(str1);
    int i2=strlen2(str2);
    for(i=0;i<(i1);i++){
        *(s+i)=*(str1+i);
    }
    for(j=i,i=0;j<(i2+i1);j++,i++){
        *(s+j)=*(str2+i);
    }
    *(s+(i1+i2))='\0';
}
int main(void){
    char string1[20];
    char string2[20];
    char stringj[41];
    printf(":::::INSERIR DADOS:::::\n");
    printf("Escreva uma frase: ");
    scanf("%s",string1);
    printf("Escreva outra frase: ");
    scanf("%s",string2);
    strjoin(stringj,string1,string2);
    printf(":::::FUUUUUUUUUSÂO:::::\n");
    printf("Strings juntas: %s\n",stringj);
    printf(":::::::::::::::::::::::\n");
    return 0;
}
