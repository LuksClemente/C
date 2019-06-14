#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int b[], int n){
	int i, j, min, aux;
	for(i = 0; i < n-1; i++){
		min = i;
		for(j = (i+1); j < n; j++){
			if(b[j] < b[min]){
				min =j;
			}
		}
		if(b[i] != b[min]){
			aux = b[i];
			b[i] = b[min];
			b[min] = aux;
		}
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
	SelectionSort(b, 10);
	Exibe(b, 10);
}
