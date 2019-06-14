#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int b[], int n){
	int escolhido, j, i;
	for (i = 1; i < n; i++) {
		escolhido = b[i];
		j = i - 1;
		
		while ((j >= 0) && (b[j] > escolhido)) {
			b[j + 1] = b[j];
			j--;
		}
		b[j + 1] = escolhido;
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
	InsertionSort(b, 10);
	Exibe(b, 10);
}
