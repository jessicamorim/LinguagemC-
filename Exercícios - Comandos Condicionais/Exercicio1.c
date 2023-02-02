/******************************************************************************

Faça um programa que receba dois numeros e mostre qual deles e o maior. 

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int primeiroNumero;
    int segundoNumero;
    
    printf("Primeiro número: ");
    scanf("%d", &primeiroNumero);
    printf("Segundo número: ");
    scanf("%d", &segundoNumero);
    
        if(primeiroNumero > segundoNumero)
            printf("O primeiro número é o maior");
        else if(primeiroNumero < segundoNumero)
            printf("O segundo número é o maior");
        else
            printf("O número são iguais");
            
    return 0;
}
