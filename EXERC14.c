#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


// Fa�a um programa em C que simule um cron�metro com horas, minutos e segundos. A simula��o
// dever� mostrar no v�deo o cron�metro no seguinte formato HH: MM: SS. Inicialmente o cron�metro ser� 
// zerado ( 00: 00: 00 ), sendo que os segundos come�ar�o a ser incrementados, depois os minutos e
// depois as horas. Lembre-se que a cada 60 segundos os minutos dever�o ser incrementados, depois os
//  minutos voltar�o a zero. Quando as horas estiverem prestes a chegar em 25, o cron�metro dever�
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
