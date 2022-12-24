/******************************************************************************

Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular e calculado por meio da seguinte fórmula: V = π ∗ raio2 ∗ altura,
onde π = 3.141592.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio;
    float altura;
    float volumeCirculo;
    
    printf("Raio: ");
    scanf("%f", &raio);
    printf("Altura: ");
    scanf("%f", &altura);
  
        volumeCirculo = 3.141592 * raio * raio * altura;
        
    printf("O volume do circulo é: %.1f ", volumeCirculo);
  
    return 0;
}