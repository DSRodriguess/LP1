#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


// Faça um programa em C que simule um cronômetro com horas, minutos e segundos. A simulação
// deverá mostrar no vídeo o cronômetro no seguinte formato HH: MM: SS. Inicialmente o cronômetro será 
// zerado ( 00: 00: 00 ), sendo que os segundos começarão a ser incrementados, depois os minutos e
// depois as horas. Lembre-se que a cada 60 segundos os minutos deverão ser incrementados, depois os
//  minutos voltarão a zero. Quando as horas estiverem prestes a chegar em 25, o cronômetro deverá
// voltar a zero ( 00: 00: 00 ).

int main(){
	
	int hora=0,min=0,seg=0,i=0;
	
	while (i<1){
		
		printf("%dh : %dm : %ds",hora,min,seg);
		Sleep(1000);
		system("cls");
		seg=seg+1;
		
		if (seg==60){
			seg=0;
			min++;
		}
		if(min==60){
			min=0;
			hora++;
			
		}
		if(hora==24){
			hora=0;
		}
	}
}
