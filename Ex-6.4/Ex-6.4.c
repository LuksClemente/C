#include <stdio.h>
#include <stdlib.h>
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
int main(void){
    int s;
    char string[100];
    printf("::::::::::INSERIR DADOS:::::::::::\n");
    printf("Digite uma frase: ");
    scanf("%s",string);
    s=strlen2(string);
    printf(":::::QUANTIDADE DE CARACTERES:::::\n");
    printf("Numero de caracteres: %d\n",s);
    printf("::::::::::::::::::::::::::::::::::\n");
    return 0;
}
