/******************************************************************************

Leia um valor de massa em libras e apresente-o convertido em quilogramas. A formula
de conversão é: K = L ∗ 0,45, sendo K a massa em quilogramas e L a massa em libras.


*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float quilograma;
    float libras;
    
    printf("Libras: ");
    scanf("%f", &libras);
    
       quilograma = libras * 0.45;
        
    printf("A massa em quilograma é: %.1f ",  quilograma);
    
    return 0;
}
