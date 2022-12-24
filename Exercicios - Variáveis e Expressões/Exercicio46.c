/******************************************************************************

Faça um programa que leia um numero inteiro positivo de três dígitos (de 100 a 999).
Gere outro numero formado pelos dígitos invertidos do numero lido.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    int unidade;
    int dezena;
    int calculodezena;
    int centena; 
    
      printf("Número com três dígitos - 100 a 999: ");
      scanf("%d", &numero);
      
      unidade = numero % 10;
      calculodezena = numero % 100;
      dezena = calculodezena / 10;
      centena = numero / 100;
        
        printf("\n");
         
    printf("O número invertido fica: %d%d%d", unidade, dezena, centena);

    return 0;
}
