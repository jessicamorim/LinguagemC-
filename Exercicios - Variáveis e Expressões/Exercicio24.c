/******************************************************************************

Leia um valor de area em metros quadrados  m2 e apresente-o convertido em acres. A
formula de conversão é:  A = M ∗ 0, 000247, sendo M a area em metros quadrados é A
a area em acres. 

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float quadrados;
    float acres;
    
    printf("Quadrado: ");
    scanf("%f", &quadrados);
    
      acres = quadrados * 0.000247;
        
    printf("A área em metros quadrados é: %f ", acres);
    
    return 0;
}
