/******************************************************************************

Leia um valor de comprimento em metros e apresente-o convertido em jardas. A formula 
de conversão é: J = M / 0,91 , sendo J o comprimento em jardas e M o comprimento em
metros.


*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float jardas;
    float metros;
    
    printf("Metros: ");
    scanf("%f", &metros);
    
       jardas = metros / 0.91;
        
    printf("O comprimento em metros é: %.1f ", metros);
    
    return 0;
}
