#include <stdio.h>

// Um inteiro perfeito n é igual a soma de todos os seus divisores próprios. A faixa de seus divisores
// próprios vai de 1 a (n-1). Por exemplo : 6 é um inteiro perfeito; a soma de todos os seus divisores próprios 
// (1 + 2 + 3) é igual a 6. Escreva um programa em C que determine se um número no intervalo de 1 a 32767 é
// um inteiro perfeito. 

int main() {
  int n,cont,divisor; 

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  
  cont = 0;
  
  for (divisor = 1; divisor < n; divisor++){
    if (n % divisor == 0)
      cont = cont + divisor;
  }
  
  if (n == cont)
    printf("O numero %d e' perfeito\n", n);
  else 
    printf("O numero %d nao e' perfeito\n", n);
  
  return 0;
}
