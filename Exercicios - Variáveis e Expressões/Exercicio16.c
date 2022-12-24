/******************************************************************************

Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
A formula de conversão é: C = P ∗ 2, 54, sendo C o comprimento em centímetros e P o
comprimento em polegadas.


*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float polegadas;
    float centimetros;
    
    printf("Polegadas: ");
    scanf("%f", &polegadas);
    
       centimetros = polegadas * 2.54;
        
    printf("o comprimento em centimetros é: %.1f ", centimetros);
    
    return 0;
}
