#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escrever um programa em C que calcule a frequência de uso de cada palavra dentro de uma cadeia de
// caracteres que possui diversas palavras. Considerar o tamanho máximo da cadeia como sendo de 80 colunas.

typedef struct{
	char* p;
}word;

void main(){
	char palavra[80] = "um prato de trigo para tres tigres tristes";
	int i = 0;
	int j,z;
	word p[80];
	
	char* teste = strtok(palavra," ");
	while(teste != NULL){
		p[i].p = teste;	
		teste = strtok(NULL," ");
		i++;
	} 

	int rep[80] = {0};
	for(j = 0; j < i; j++){
		printf("\n");
		for(z = 0; z < i; z++){
			if(j != z && strcmp(p[j].p,p[z].p) == 0){
				rep[j]++;
			}
		}
	}
	
	for(j = 0; j < i;j++){
		printf("palavra: %s",p[j].p);
		printf(" Repeticoes: %d",rep[j]);
		printf("\n");
	}

}
