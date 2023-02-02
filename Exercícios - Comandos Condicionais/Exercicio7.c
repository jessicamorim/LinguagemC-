/*******************************************************************************

Faça um programa que receba dois numeros e mostre o maior. Se por acaso, os dois
numeros forem iguais, imprima a mensagem Números iguais.


*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int primeiroNumero;
    int segundoNumero;
    
    printf("Primeiro Número: ");
    scanf("%d", &primeiroNumero);
    printf("Segundo Número: ");
    scanf("%d", &segundoNumero);
    
    
        if(primeiroNumero > segundoNumero){
            printf("O primeiro número é o maior");
        }else if (primeiroNumero < segundoNumero){
            printf("O segundo número é o maior");
        }else{
            printf("Números iguais");
        }
        
    return 0;
}
