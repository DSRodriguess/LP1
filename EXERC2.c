#include<stdio.h>
#include <locale.h>

// 2) Escreva um programa em C que verifique se um determinado inteiro positivo que � lido via teclado, � ou
// n�o primo.
 
int main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0;
 
 printf("Digite um n�mero: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d � um n�mero primo\n", num);
 else
    printf("%d n�o � um n�mero primo\n", num);
 
 return 0;
}
