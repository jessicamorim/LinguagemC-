/******************************************************************************

Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
formula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float celsius;
    float kelvin;
    
    printf("Celsius: ");
    scanf("%f", &celsius);
    
       kelvin = celsius + 273.15;
        
    printf("A temperatura em kelvin: %.1f ", kelvin);
    
    return 0;
}
