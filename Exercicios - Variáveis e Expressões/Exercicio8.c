/******************************************************************************

Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
formula de conversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float celsius;
    float kelvin;
    
    printf("Kelvin: ");
    scanf("%f", &kelvin);
    
      celsius = kelvin − 273.15;
        
    printf("A temperatura em celcius: %.1f ", celsius);
    
    return 0;
}
