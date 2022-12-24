/******************************************************************************

Leia um angulo em radianos e apresente-o convertido em graus. A fôrmula de conversão
é: G = R ∗ 180/π, sendo G o angulo em graus é R em radianos e π = 3.14.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float graus;
    float radianos;
    
    printf("Radianos: ");
    scanf("%f", &radianos);
    
       graus = radianos * 180 / 3.14;
        
    printf("A número em graus é: %.1f ", graus);
    
    return 0;
}
