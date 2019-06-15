#include <stdio.h>
#include <stdlib.h>

void QuickSort(int b[], int inicio, int fim){
	int i, j, pivo, aux;
	i = inicio;
	j = fim - 1;
	pivo = b[(inicio + fim) / 2];
	while(i <= j){
		while((b[i] < pivo)&&(i < fim)){
			i++;
		}
		while((b[j] > pivo)&&(j > inicio)){
			j--;
		}
		if(i <= j){
			aux = b[i];
			b[i] = b[j];
			b[j] = aux;
			i++;
			j--;
		}
	}
	if(j > inicio){
		QuickSort(b, inicio, j + 1);
	}
	if(i < fim){
		QuickSort(b, i, fim);
	}
}
void Exibe(int b[], int n){
	int i;
	printf("[");
	for(i = 0; i < n; i++){
		printf("%d ", b[i]);
	}
	printf("]\n");
}
int main(void){
	int b[] = {1, 9, 5, 4, 7, 6, 8, 2, 3, 0};
	Exibe(b, 10);
	QuickSort(b, 0, 10);
	Exibe(b, 10);
}
