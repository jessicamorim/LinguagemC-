/******************************************************************************

Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de 
seu dobro.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    int antecessor;
    int sucessor;
    int resultado; 
    
    printf("Número: ");
    scanf("%d", &numero);
  
        antecessor = numero - 1;
        sucessor = numero + 1;
        
        resultado = 3 * sucessor + 2 * antecessor;
        
    printf("O resulktado será: %d ", resultado);
  
    return 0;
}
