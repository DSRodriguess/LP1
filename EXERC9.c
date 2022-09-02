#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escrever um programa em C que calcule e imprima o número de caracteres distintos presentes em uma
// cadeia de caracteres dada. Considerar o tamanho máximo da cadeia como sendo de 80 colunas.

int main(){
    char texto[50];
    int i,j,c,conta=1;
    int total;
	int repetidos=0;
    printf("\nDigite a frase: ");
    fgets(texto, 50, stdin);
    c = strlen(texto);
    printf("\n%s",texto);
    for(i=0; texto[i]!='\n'; i++){
        if(texto[i]==' '){
            conta++; 
        }
    }

    for(i=0; texto[i]!='\0';i++){
        for(j=0; texto[j]!='\0';j++){
            if(texto[i] == texto[j] && j != i){
                repetidos++;
                break;
            }
        }
    }
    total = c - conta - repetidos;
    printf("\nNumero de letras retirando repetidos = %d\n\n", total);
    return 0;
}
