#include <stdio.h>

// Um inteiro perfeito n � igual a soma de todos os seus divisores pr�prios. A faixa de seus divisores
// pr�prios vai de 1 a (n-1). Por exemplo : 6 � um inteiro perfeito; a soma de todos os seus divisores pr�prios 
// (1 + 2 + 3) � igual a 6. Escreva um programa em C que determine se um n�mero no intervalo de 1 a 32767 �
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
