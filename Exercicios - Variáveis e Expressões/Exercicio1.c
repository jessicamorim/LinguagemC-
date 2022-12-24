/*****************************************************************************

    Faça um programa que leia um numero inteiro e o imprima

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    
    printf("Número: ");
    scanf("%d", &numero);
    
    printf("Número é: %d ", numero);
    
    return 0;
}
