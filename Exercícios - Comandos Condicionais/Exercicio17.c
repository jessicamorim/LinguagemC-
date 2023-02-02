/******************************************************************************

Faça um programa que calcule e mostre a area de um trapézio. Sabe-se que: 

A = (basemaior + basemenor) ∗ altura / 2

Lembre-se a base maior e a base menor devem ser numeros maiores que zero.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float baseMenor;
    float baseMaior;
    float altura;
    float area;
    
    printf("Base Menor: ");
    scanf("%f", &baseMenor);
        if(baseMenor < 0){
           printf("Base menor inválida\n"); 
        }
    printf("Base Maior: ");
    scanf("%f", &baseMaior);
        if(baseMaior < 0){
           printf("Base maior inválida\n"); 
        }
    printf("Altura: ");
    scanf("%f", &altura);
 
        area = ((baseMenor + baseMaior) + altura) / 2;
        printf("A área do trapésio é: %.1f ", area);

    return 0;
}
