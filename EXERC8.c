#include <stdio.h>
#include <stdlib.h>

// Para um vetor A de 50 números inteiros, escrever um programa em C que determine o maior e o segundo
// maior elemento desse vetor. Assumir que todos os elementos são distintos.

int main(int argc, char *argv[])
{
    int v[50],maior=0,smaior=0,i;

    for (i=1; i<=5;i++)
    {
     printf("Digite os elementos do vetor\n",i);
     scanf("%i",&v[i]);
     if (v[i]>maior)
     {
     maior=v[i];
     }
    }
     printf("\n\n");
  for (i=1; i<=5;i++)
    {
      if (v[i]!=maior)
       {
         if (v[i]>smaior)
         {smaior=v[i];}
         }
    }



    printf("\nO maior e:%i\n",maior);
    printf("\nO segundo maior e:%i\n",smaior);

  system("PAUSE");	
  return 0;
}
