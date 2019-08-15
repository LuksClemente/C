#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int b[], int inicio, int fim, int x){
 int meio;
 meio = (inicio + fim)/2;
 if(b[meio] == x){
  return meio;
 }
 else if(b[meio] > x){
  return buscaBinaria(b, inicio, meio - 1, x);
 } 
 else{
  return buscaBinaria(b, meio + 1, fim, x);
 }
}

//A funcao acima so' funciona em listas ordenadas!!!
int main(void){
 int b[10];
 int x, i, f;
 for(i = 0; i < 10; i++){
  printf("Digite um valor: ");
  scanf("%d", &x);
  b[i] = x;
 }
 printf("Digite um valor a buscar: ");
 scanf("%d", &x);
 f = buscaBinaria(b, 0, 10, x);
 printf("O elemento [%d] e' o %dº da lista!\n", x, f+1);
}
