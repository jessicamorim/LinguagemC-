/******************************************************************************

Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float fahrenheit;
    float celsius;
    
    printf("Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
       celsius = 5.0 ∗ (fahrenheit − 32.0) / 9.0;
        
    printf("A temperatura em celsius: %.1f ", celsius);
    
    return 0;
}
