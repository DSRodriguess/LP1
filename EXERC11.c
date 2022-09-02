#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Escrever um programa em C que leia uma cadeia de caracteres e imprima todas as palavras que
// contenham três ou mais vogais.

typedef struct{
	char *w;	
}palavras;

void main(){
	char p[80] = "Uruguai e Paraguai";
	char comp[80];
	char vogais[5] = "aeiou";
	palavras palavra[80];
	int i = 0;
	int totVog = 0;
	int x,z,j;

	char* teste = strtok(p," ");
	while(teste != NULL){
		palavra[i].w = teste;	
		teste = strtok(NULL," ");
		i++;
	}


	for(x = 0; x <= i;x++){
		if(totVog >= 3){
			printf("%s \n",palavra[x-1].w);
			totVog = 0;
		}else{
			totVog = 0;
		}
		strcpy(comp,palavra[x].w);
		for(j = 0;j < 5;j++){
			for(z = 0;z < strlen(comp);z++){
				if(comp[z] == vogais[j]){
					totVog++;
				}
			}
		}
	}
		
}
