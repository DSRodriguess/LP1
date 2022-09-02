#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// O Departamento de trânsito do estado anotou dados de acidentes de trânsito no último ano. Para cada
// motorista envolvido no acidente, tem-se as seguintes informações:
// - Ano de nascimento;
// - Sexo (M - Masculino, F - Feminino)
// - Procedência ( 0 - Capital, 1 - Interior, 2 - Outro estado);
// Faça um programa em C que :
// a) Calcule a porcentagem de motoristas com menos de 21 anos;
// b) Calcule quantas mulheres são da capital;
// c) Calcule quantos motoristas do interior do estado tem idade maior que 60 anos;
// d) Verifique se existe alguma mulher com idade maior que 60 anos;

typedef struct{
	char sexo[10];
	int ano,p;
}ficha;

void main(){
	int i,cad,ano,proced;

	int moto21 = 0;
	int mc = 0;
	int iint = 0;
	int midosa = 0;

	printf("Cadastros: ");
	scanf("%d",&cad);

	ficha pessoa[cad];

	for(i = 0; i < cad;i++){
		printf("Ano: ");
		scanf("%d",&pessoa[i].ano);
		printf("Sexo: ");
		scanf("%s",pessoa[i].sexo);
		printf("Procedencia: ");
		scanf("%d",&pessoa[i].p);
		printf("\n");
		system("cls");
	}
	system("cls");
	
	for(i = 0; i < cad;i++){
		ano = pessoa[i].ano;
		proced = pessoa[i].p;
		if(2021 - ano <= 21){
			moto21++;
		}
		if(strcmp(pessoa[i].sexo,"F") == 0 && proced == 0){
			mc++;
		}
		if((proced == 1) && (2021 - ano > 60)){
			iint++;
		}
		if((strcmp(pessoa[i].sexo,"F") == 0) && (2021 - ano > 60)){
			midosa++;
		}
	}

	printf("Motoristas menores que 21 anos: %d",moto21);
	printf("\n");
	printf("Motoristas mulheres da capital: %d",mc++);
	printf("\n");
	printf("Motoristas do interior idosos: %d",iint);
	printf("\n");
	printf("Motoristas mulheres idosas: %d",moto21);
}
