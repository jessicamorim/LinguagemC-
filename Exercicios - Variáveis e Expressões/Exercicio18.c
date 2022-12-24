/******************************************************************************

Leia um valor de volume em metros cubicos m3 e apresente-o convertido em litros. A
formula de conversão é: L = 1000 ∗ M, sendo L o volume em litros e M o volume em
metros cubicos.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float metros;
    float litros;
    
    printf("Metros: ");
    scanf("%f", &metros);
    
       litros = 1000 * metros;
        
    printf("o volume em metros cúbicos é: %.1f ", litros);
    
    return 0;
}
