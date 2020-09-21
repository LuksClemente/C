#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leGrafo(){
    char nome[25], *nomearq;
    printf("Digite o nome do grafo que voce deseja abrir: ");
    scanf("%s", &nome);
    printf("\n");
    nomearq = strcat(nome, ".txt");
    FILE* f = fopen(nomearq, "r");
    int x;
    printf("\n----------MATRIZ----------\n\n");
    do{
        x = fgetc(f);
        printf("%c", x);
    }while(x != EOF);
    printf("\n--------------------------\n\n");
    fclose(f);
}
void criaGrafo(){
    char nome[25], *nomearq;
    int linhas, colunas, i, j;
    printf("Nome do grafo: ");
    scanf("%s", &nome);
    nomearq = strcat(nome, ".txt");
    printf("Numero de linhas: ");
    scanf("%d", &linhas);
    colunas = linhas;
    int matriz[linhas][colunas];
    for(i = 0; i < linhas; ++i){
        for(j = 0; j < colunas; ++j){
            if(i >= j){
                matriz[i][j] = 0;
            }
            else if(i < j){
                printf("Complete com 0 ou outros numeros em [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matriz[i][j]);
            }
        }
    }
    for(i = 0; i < linhas; ++i){
        for(j = 0; j < colunas; ++j){
            if(i >= j){
                matriz[i][j] = matriz[j][i];
            }
        }
    }
    printf("\n----------MATRIZ----------\n\n");
    for(i = 0; i < linhas; ++i){
        for(j = 0; j < colunas; ++j){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n--------------------------\n\n");
    FILE* f = fopen(nomearq, "w");
    for(i=0; i< linhas; i++) {
	    for(j=0; j< colunas; j++){ 
		    fprintf(f, "%d\t", matriz[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);       
}
int main(void){
    int resposta;
    printf("O que voce deseja?\n\n1 - Carregar um grafo\n2 - Criar um grafo novo\n\nInsira sua resposta: ");
    scanf("%d", &resposta);
    printf("\n");
    if(resposta == 1){
        leGrafo();
    }
    else if(resposta == 2){
        criaGrafo();
    }
    else{
        printf("\nResposta invalida, favor reiniciar o programa!");
    }
}
