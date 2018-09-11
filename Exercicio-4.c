#include <stdio.h>

int main (void){
	int mph;
	printf("Digite a velocidade em Milhas/Hora: ");
	scanf("%d", &mph);
	int kmh=(1.6*mph);
	if (kmh>100){
		printf("Voce esta muito rapido! DESACELERE!");
	}else if(kmh>80){
		printf("MANTENHA!");
	}else{
		printf("Voce esta muito devagar! ACELERE!");
	}
	return 0;
}
