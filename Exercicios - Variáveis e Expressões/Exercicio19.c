/******************************************************************************

Leia um valor de volume em litros e apresente-o convertido em metros cubicos m3
. A formula de conversão é:  M = L/1000, sendo L o volume em litros e M o volume em metros
cubicos

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float metrosCubicos;
    float litros;
    
    printf("Litros: ");
    scanf("%f", &litros);
    
       metrosCubicos = litros / 1000;
        
    printf("o volume em metros cúbicos é: %.1f ", metrosCubicos);
    
    return 0;
}
