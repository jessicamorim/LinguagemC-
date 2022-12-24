/******************************************************************************

Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A f ˆ ormula de conversão é: K = M ∗ 3.6, sendo K a velocidade
em km/h e M em m/s.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float metro;
    float quilometro;
    
    printf("Metro: ");
    scanf("%f", &metro);
    
       quilometro = metro * 3.6;
        
    printf("A velocidade em quilometro: %.1f ",  quilometro);
    
    return 0;
}
