/******************************************************************************

Leia um valor de comprimento em jardas e apresente-o convertido em metros. A formula 
de conversão é:  M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento
em metros.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float jardas;
    float metros;
    
    printf("Jardas: ");
    scanf("%f", &jardas);
    
       metros = 0.91 * jardas;
        
    printf("O comprimento em metros é: %.1f ", metros);
    
    return 0;
}
