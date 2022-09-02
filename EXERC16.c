#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Fa�a um programa em C que atenda �s regras do seguinte jogo de dados. Dois jogadores est�o
// confrontando-se entre si, usando dois dados, numerados de 1 at� 6 (dado RAND(5) + 1). Vence uma
// rodada quem obtiver o maior n�mero no lan�amento. Entretanto, caso um jogador obtiver um
// lan�amento com dois dados iguais (por exemplo, 1 e 1, 2 e 2,....) e o outro jogador n�o, o jogador que
// tiver lan�ado a dupla ganha. Caso os dois jogadores fizerem o lan�amento e o resultado for de duas
// duplas para os dois jogadores, ganha o jogador com a dupla maior. A disputa � em 11 lan�amentos.
// Indique o jogador vencedor ou se houve empate. */

int main(){
	
	int i,j,p1=0,p2=0,d1[2],d2[2];
	srand (time (NULL));
	
	
	
	for(i=0; i<11; i++){
		
		for(j=0; j<2; j++){
			d1[j]=(rand()%6)+1;
			d2[j]=(rand()%6)+1;
		}
		printf("Dados do jogador 1: %d  %d\n",d1[0],d1[1]);
		printf("Dados do jogador 2: %d  %d\n",d2[0],d2[1]);
		
		if (d1[0]==d1[1] && d2[0]==d2[1]){
			if (d1[0]+d1[1]>d2[0]+d2[1]){
				p1=p1+1;
				p2=p2+0;
				printf("Jogardor 1!\n p1:%d  p2: %d\n\n",p1,p2);
			}else {
				if(d1[0]+d1[1]<d2[0]+d2[1])	{
					p1=p1+0;
					p2=p2+1;
					printf("Jogardor 2!\n p1:%d  p2: %d\n\n",p1,p2);
				}else{
					p1=p1+0;
					p2=p2+0;
					printf("Ninguem!\n p1:%d  p2: %d\n\n",p1,p2);
				}
			}
		}else{
			if(d1[0]==d1[1] || d2[0]==d2[1]){
				if(d1[0]==d1[1]){
					p1=p1+1;
					p2=p2+0;
					printf("Jogardor 1!\n p1:%d  p2: %d\n\n",p1,p2);
				}else{
					p1=p1+0;
					p2=p2+1;
					printf("Jogardor 2!\n p1:%d  p2: %d\n\n",p1,p2);
				}
			}else{
				if (d1[0]+d1[1]>d2[0]+d2[1]){
					p1=p1+1;
					p2=p2+0;
					printf("Jogardor 1!\n p1:%d  p2: %d\n\n",p1,p2);
				}else{
					if(d1[0]+d1[1]<d2[0]+d2[1]){
						p1=p1+0;
						p2=p2+1;
						printf("Jogardor2!\n p1:%d  p2: %d\n\n",p1,p2);
					}else{
						p1=p1+0;
						p2=p2+0;
						printf("Ninguem!\n p1:%d  p2: %d\n\n",p1,p2);
					}
				}
			}
		}	
	}
	if(p1>p2){
		printf("O jogador 1 venceu!");
	}else{
		if(p1<p2){
			printf("O jogador 2 venceu!");
		}else{
			printf("Empate!");
		}
	}
}
