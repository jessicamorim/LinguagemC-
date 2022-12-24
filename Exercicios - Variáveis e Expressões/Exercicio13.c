/******************************************************************************
Leia uma distancia em quilômetros e apresente-a convertida em milhas. A fôrmula de
conversão é: M = K/1,61 , sendo K a distancia em quilômetros é M em milhas

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float quilometro;
    float milhas;
    
    printf("Quilometro: ");
    scanf("%f", &quilometro);
    
       milhas = quilometro / 1.61;
        
    printf("A velocidade em milhas é: %.1f ", milhas);
    
    return 0;
}
