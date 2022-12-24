/******************************************************************************

    Faça um programa que leia um numero real e o imprima.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    
    printf("Número: ");
    scanf("%f", &numero);
    
    printf("Número é: %.1f ", numero);
    
    return 0;
}
