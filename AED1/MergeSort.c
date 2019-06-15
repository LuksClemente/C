#include <stdio.h>
#include <stdlib.h>

void Merge(int b[], int inicio, int meio, int fim) { 
    int i, j, k; 
    int n1 = meio - inicio + 1; 
    int n2 =  fim - meio; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++){
        L[i] = b[inicio + i];
    }
    for (j = 0; j < n2; j++){
        R[j] = b[meio + 1+ j];
    }
    i = 0; 
    j = 0;
    k = inicio;
    while ((i < n1)&&(j < n2)) { 
        if (L[i] <= R[j]) { 
            b[k] = L[i]; 
            i++; 
        } 
        else{ 
            b[k] = R[j]; 
            j++; 
        } 
        k++; 
    }
    while (i < n1) { 
        b[k] = L[i]; 
        i++; 
        k++; 
    }
    while (j < n2) { 
        b[k] = R[j]; 
        j++; 
        k++; 
    } 
}
void MergeSort(int b[], int inicio, int fim){ 
    if (inicio < fim){
        int meio = inicio + ((fim - inicio)/2);
        MergeSort(b, inicio, meio); 
        MergeSort(b, meio + 1, fim); 
		Merge(b, inicio, meio, fim); 
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
	MergeSort(b, 0, 9);
	Exibe(b, 10);
}
