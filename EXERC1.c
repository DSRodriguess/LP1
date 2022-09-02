#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//1) Escreva um programa em C que encontre o menor inteiro positivo n que atenda as seguintes condições :
// n / 3 = x inteiro e resto 2
// n / 5 = y inteiro e resto 3
// n / 7 = z inteiro e resto 4 

void main(){
	
	int num, aux_3,aux_5,aux_7;
	num=1;
	while (1){
		
	aux_3 = num%3;
	aux_5 = num%5;
	aux_7 = num%7;
	
	if (( aux_3==2) && (aux_5==3) && (aux_7==4)) {
	printf("O menor inteiro positivo que atende as condiçoes eh' %d \n",num);;
	break;
	}
	num++;
	}

getch();
system("cls");
return(0);
}
