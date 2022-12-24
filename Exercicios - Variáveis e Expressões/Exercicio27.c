/******************************************************************************

Leia um valor de area em hectares e apresente-o convertido em metros quadrados m2
. A formula de conversão é:  M = H ∗ 10000, sendo M a area em metros quadrados é H
a area em hectares. 

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float metrosQuadrados;
    float hectares;
    
    printf("Hectares: ");
    scanf("%f", &hectares);
    
       metrosQuadrados = hectares * 10000;
        
    printf("A área em metros é: %.1f ", metrosQuadrados);
    
    return 0;
}
