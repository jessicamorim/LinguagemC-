/******************************************************************************

Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s ˆ
(metros por segundo). A formula de conversão é: M = K/3.6, sendo K a velocidade em
km/h e M em m/s.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float quilometro;
    float metro;
    
    printf("Quilometro: ");
    scanf("%f", &quilometro);
    
       metro = quilometro / 3.6;
        
    printf("A velocidade em metro: %.1f ",  metro);
    
    return 0;
}
