/******************************************************************************

Leia o tamanho do lado de um quadrado e imprima como resultado a sua area.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float lado;
    float areaQuadrado;
    
    printf("Número: ");
    scanf("%f", &lado);
  
        areaQuadrado = lado * lado;
        
    printf("A área do quadrado é: %.1f ", areaQuadrado);
  
    return 0;
}
