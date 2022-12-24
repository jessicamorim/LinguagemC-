/******************************************************************************

Leia um valor de area em acres e apresente-o convertido em metros quadrados m2
. A formula de conversão é: M = A ∗ 4048, 58, sendo M a area em metros quadrados é A a
area em acres. 

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float quadrados;
    float acres;
    
    printf("Acres: ");
    scanf("%f", &acres);
    
      quadrados = acres * 4048.58;
        
    printf("A área em metros quadrados é: %.1f ", quadrados);
    
    return 0;
}
