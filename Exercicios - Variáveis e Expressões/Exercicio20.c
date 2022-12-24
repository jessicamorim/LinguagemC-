/******************************************************************************

Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula 
de conversâo é: L = K/0,45 , sendo K a massa em quilogramas e L a massa em libras.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float quilograma;
    float libras;
    
    printf("Quilograma: ");
    scanf("%f", &quilograma);
    
       libras = quilograma / 0.45;
        
    printf("A massa em libras é: %.1f ", libras);
    
    return 0;
}
