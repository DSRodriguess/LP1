#include <stdlib.h>
#include <stdio.h>

// O troco em moedas é uma combinação de moedas com os seguintes valores :
// R$ 1,00 ; 0,50; 0,25; 0,10; 0,05; 0,01
// Escreva um programa em C que leia qualquer valor em centavos (R$0,01 até R$1,00). Calcule e imprima
// seu equivalente em moedas. Encontre a solução que utilize o menor número possível de moedas. 


int main()
{
      float troco;
      int tr100, tr050, tr025, tr010, tr005, tr001;

      tr100=0;
      tr050=0;
      tr025=0;
      tr010=0;
      tr005=0;
      tr001=0;
      
     
      system("CLS");           //Limpando tela
      printf("Informe o valor do Troco:  ");
      scanf("%f",&troco);
      
      //desenvolvimento

      while (troco > 0.01)
      {
        if (troco > 0.99)
        {
          troco=(float)troco-1;
          tr100++;
          
        } 
        
        if (troco > 0.49 && troco<1.00)
          {
              troco=(float)troco-0.50;
              tr050++;
             
           }
            
        if (troco > 0.24 && troco<0.50)
          {
           troco=(float)troco-0.25;
           tr025++;
          
           }
            
        if (troco >0.09 && troco<0.25)
           {
            troco=(float)troco-0.10;
            tr010++;
            
            }
             
        if (troco > 0.04 && troco<0.10)
            {
              troco=(float)troco-0.05;
              tr005++;
              
             } 
        if (troco >0.00 && troco<0.05)
            {
              troco=(float)troco-0.01;
              tr001++;
              
             }
             
      }



      //Impressão de moedas
      if (tr100 > 0)
        printf("\n\n%i Moeda(s) de um Real\n",tr100);
      if (tr050 > 0)
        printf("%i Moeda(s) de Cinquenta Centavos\n",tr050);
      if (tr025 > 0)
        printf("%i Moeda(s) de Vinte e Cinco Centavos\n",tr025);
      if (tr010 > 0)
        printf("%i Moeda(s) de Dez Centavos\n",tr010);
      if (tr005 > 0)
        printf("%i Moeda(s) de Cinco Centavos\n",tr005);
      if (tr001 > 0)
        printf("%i Moeda(s) de Um Centavo\n",tr001);

      printf("\n");

      system("PAUSE");
      return 0;
}
