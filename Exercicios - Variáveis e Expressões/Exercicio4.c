/******************************************************************************

Leia um numero real e imprima o resultado do quadrado desse número.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    float quadradoNumero;
    
    printf("Número: ");
    scanf("%f", &numero);
    
        quadradoNumero = numero * numero;
        
    printf("O quadrodo do número é: %.1f ", quadradoNumero);
    
    return 0;
}
