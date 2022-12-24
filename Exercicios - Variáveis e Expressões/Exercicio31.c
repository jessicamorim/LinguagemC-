/******************************************************************************

Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    int antecessor;
    int sucessor;
    
    printf("Número: ");
    scanf("%d", &numero);
  
        antecessor = numero - 1;
        sucessor = numero + 1;
        
    printf("O antecessor é: %d ", antecessor);
    printf("\nO sucessor é: %d ", sucessor);
    
    return 0;
}
