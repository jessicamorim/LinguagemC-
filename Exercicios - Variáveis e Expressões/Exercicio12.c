/******************************************************************************

Leia uma distancia em milhas e apresente-a convertida em quilômetros. A fôrmula de 
conversão é: K = 1,61 ∗ M, sendo K a distancia em quilômetros é M em milhas.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float milhas;
    float quilometro;
    
    printf("Milhas: ");
    scanf("%f", &milhas);
    
       quilometro = 1.61 * milhas;
        
    printf("A velocidade em quilometro: %.1f ",  quilometro);
    
    return 0;
}
