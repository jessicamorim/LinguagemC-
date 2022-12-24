/******************************************************************************

Leia o valor do raio de um círculo e calcule e imprima a area do círculo correspondente.
A area do círculo é π ∗ raio2, considere π = 3.141592.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio;
    float areaCirculo;
    
    printf("Raio: ");
    scanf("%f", &raio);
  
        areaCirculo = 3.141592 * raio * raio;
        
    printf("A área do circulo é: %.1f ", areaCirculo);
  
    return 0;
}
