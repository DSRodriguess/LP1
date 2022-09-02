#include <stdio.h>
#include <stdlib.h>

//Dados três vetores com 10 posições cada um, preenchidos com números inteiros, fazer um programa
//em C que, após a leitura dos vetores coloque-os em ordem crescente.

void main(){
	int vet1[10] = {1,4,8,10,3,6,5,9,2,7};
	int vet2[10] = {1,4,8,10,3,6,5,9,2,7};
	int vet3[10] = {1,4,8,10,3,6,5,9,2,7};
	int i,j,maior;

	for(i = 0; i < 10;i++){
		for(j = 0;j < 10;j++){
			if(vet1[i] > vet1[j]){
				maior = vet1[i];
				vet1[i] = vet1[j];
				vet1[j] = maior;
			}
		}
	}
	for(i = 0; i < 10;i++){
		for(j = 0;j < 10;j++){
			if(vet2[i] > vet2[j]){
				maior = vet2[i];
				vet2[i] = vet2[j];
				vet2[j] = maior;
			}
		}
	}
	for(i = 0; i < 10;i++){
		for(j = 0;j < 10;j++){
			if(vet3[i] > vet3[j]){
				maior = vet3[i];
				vet3[i] = vet3[j];
				vet3[j] = maior;
			}
		}
	}

	for(i = 9; i >= 0; i--){
		printf("%d ",vet1[i]);
	}
	printf("\n");
	for(i = 9; i >= 0; i--){
		printf("%d ",vet2[i]);
	}
	printf("\n");
	for(i = 9; i >= 0; i--){
		printf("%d ",vet3[i]);
	}
	
}
