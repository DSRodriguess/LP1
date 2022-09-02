#include<stdio.h>
#include <locale.h>

// 2) Escreva um programa em C que verifique se um determinado inteiro positivo que é lido via teclado, é ou
// não primo.
 
int main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d é um número primo\n", num);
 else
    printf("%d não é um número primo\n", num);
 
 return 0;
}
