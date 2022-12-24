/******************************************************************************

Leia um angulo em graus e apresente-o convertido em radianos. A fôrmula de conversâo
é: R = G ∗ π/180, sendo G o angulo em graus é R em radianos e π = 3.14.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float graus;
    float radianos;
    
    printf("Graus: ");
    scanf("%f", &graus);
    
       radianos = graus * 3.14 / 180;
        
    printf("A número em radianos é: %.1f ", radianos);
    
    return 0;
}
