#include <stdio.h>
#include <stdlib.h>

// Um motorista acaba de retornar de um feriado prolongado. Em cada parada de reabastecimento ele
// registrou a leitura de seu odômetro, a quantidade de gasolina comprada (suponha que ele tenha enchido o
// tanque cada vez) e o preço pago. Além disso, suponha também que ele tenha enchido o tanque antes de
// partir e imediatamente após retornar. Escreva um programa em C para ler, em primeiro lugar, o número total
// de reabastecimentos feitos (incluindo o primeiro e o último) e, a seguir, os dados relativos à compra de
// gasolina e calcular :
// a) a quilometragem obtida por litro de gasolina entre cada par de paradas de reabastecimento;
// b) a quilometragem obtida por litro de gasolina em toda a viagem
// C) custo do combustível por quilometro rodado em toda a viagem4

int main(){
	int paradas=0;
	while(paradas<2){
		printf("Informe o numero de reabastecimentos feitos: ");
		scanf("%d",&paradas);	
	}
	system("cls");
	
	float somaprecos,somagasolina,somadistancias;
	somaprecos=somagasolina=somadistancias;
	float odometro[paradas]={0};
	float precos[paradas]={0};
	float gasolina[paradas]={0};
	float distancias[paradas-1]={0};
	float kmPorLitro[paradas]={0};
	
	for(int i=0; i<paradas;i++){
		printf("Dados do %do Abastecimento: \n",i+1);
		printf("Valor do Odometro: ");
		scanf("%f",&odometro[i]);
		if(i>0){
			while(odometro[i]<=odometro[i-1]){
				printf("Valor do Odometro: ");
				scanf("%f",&odometro[i]);
			}
		}
		printf("Quantidade de gasolina comprada (Litros): ");
		scanf("%f",&gasolina[i]);
		printf("Valor pago pelo abastecimento:  ");
		scanf("%f",&precos[i]);
		system("cls");
	}
	for(int i=0;i<paradas;i++){
		distancias[i]=odometro[i+1]-odometro[i];
		kmPorLitro[i]=distancias[i]/gasolina[i];
	}
	printf("Resultado:\n");
	printf("\nA)\n");
	for(int j=0;j<paradas-1;j++){
		printf("Kms por litro entre %da e a %da parada: %f\n",j+1,j+2,kmPorLitro[j]);
	}
	for(int j=0;j<paradas-1;j++){
		somagasolina+=gasolina[j];
		somadistancias+=distancias[j];
		somaprecos+=precos[j];
	}
	printf("\nB)\n");
	printf("Kms por litro no total da viagem: %f\n",somadistancias/somagasolina);
	printf("\nC)\n");
	printf("Custo do combustivel por km rodado em toda a viagem: %f",somadistancias/somaprecos);	
	return 0;
}
