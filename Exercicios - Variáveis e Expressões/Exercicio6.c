/******************************************************************************

Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fórmula de conversão é:  F = C∗(9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float celsius;
    float fahrenheit;
    
    printf("Celsius: ");
    scanf("%f", &celsius);
    
       fahrenheit = celsius * (9.0 / 5.0) + 32.0;
        
    printf("A temperatura em fahrenheit: %.1f ", fahrenheit);
    
    return 0;
}
