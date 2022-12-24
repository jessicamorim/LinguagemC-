/******************************************************************************

Leia um valor de area em metros quadrados m2 e apresente-o convertido em hectares.
A formula de conversão é: H = M ∗ 0,0001, sendo M a area em metros quadrados é H
a area em hectares. 

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float metros;
    float hectares;
    
    printf("Metros: ");
    scanf("%f", &metros);
    
       hectares = metros * 0.0001;
        
    printf("A área em hectares é: %f ", hectares);
    
    return 0;
}
