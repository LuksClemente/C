#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hannoi(int n, char torig, char taux, char tdest){
    if(n > 0){
        hannoi(n-1, torig, taux, tdest);
        printf("%c -> %c\n", torig, tdest);
        hannoi(n-1, taux, tdest, torig);
    }
}
int main(void){
    int n;
    printf("Quantos discos?: ");
    scanf("%d", &n);
    hannoi(n, 'a', 'b', 'c');
}
