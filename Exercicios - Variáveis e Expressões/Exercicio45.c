/******************************************************************************

Fac¸a um programa para converter uma letra maiúscula em letra minúscula. 
Use a tabela ASCII para resolver o problema.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char letraMaiscula;
    char letraMinuscula;
    
      printf("Letra Maiscula: ");
      scanf("%c", &letraMaiscula);
        
        letraMinuscula = letraMaiscula + 32;
         
        printf("\n");
         
    printf("A letra em minuscula é: %c", letraMinuscula);

    return 0;
}
