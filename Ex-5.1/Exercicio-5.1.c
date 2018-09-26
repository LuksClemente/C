#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b;
    int* p;
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite outro numero: ");
    scanf("%d",&b);
    printf(":::::VALORES ORIGINAIS:::::\n");
    printf("Valor de [a]: %d\nValor de [b]: %d\n",a,b);
    printf(":::::VALORES ALTERADOS:::::\n");
    if(a>b){
        int* p=&a;
        *p=a-50;
        printf("Valor de [a]: %d\nValor de [b]: %d\n",*p,b);
    }else{
        int* p=&b;
        *p=b-50;
        printf("Valor de [a]: %d\nValor de [b]: %d\n",a,*p);
    }
    return 0;
}
