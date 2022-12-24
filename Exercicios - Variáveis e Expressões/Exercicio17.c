/******************************************************************************.

Leia um valor de comprimento em cent´ımetros e apresente-o convertido em polegadas.
A fôrmula de conversão é: P = C/2,54 , sendo C o comprimento em centímetros e P o
comprimento em polegadas.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float polegadas;
    float centimetros;
    
    printf("Centimetros: ");
    scanf("%f", &centimetros);
    
       polegadas = centimetros / 2.54;
        
    printf("o comprimento em polegadas é: %.1f ", polegadas);
    
    return 0;
}
