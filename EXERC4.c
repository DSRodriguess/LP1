#include <stdio.h>

//Escreva um programa em C que calcule o fatorial de um número inteiro positivo. 
 
int main(){
	int fat, n;
	printf("Insira o numero inteiro positivo: ");
	scanf("%d", &n);
 
	for(fat = 1; n > 1; n = n - 1)
	fat = fat * n;
 
	printf("\nFatorial calculado: %d", fat);
	return 0;
}
