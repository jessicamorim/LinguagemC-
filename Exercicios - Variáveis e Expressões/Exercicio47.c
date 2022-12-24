/******************************************************************************

Leia um numero inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    int unidade;
    int dezena;
    int calculoDezena;
    int centena;
    int calculoCentena;
    int milhar; 
    
      printf("Número com quatro dígitos - 1000 a 9999: ");
      scanf("%d", &numero);
      
        unidade = numero % 10;
        calculoCentena = numero % 1000;
        centena = calculoCentena / 100;
        calculoDezena = calculoCentena % 100;
        dezena = calculoDezena / 10;
        milhar = numero / 1000;
         
        printf("\n");
         
    printf("%d\n", unidade);
    printf("%d\n", dezena);
    printf("%d\n", centena);
    printf("%d\n", milhar);

    return 0;
}