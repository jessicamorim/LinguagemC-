/*******************************************************************************

Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior 
deles, assim como a diferença existente entre ambos.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int primeiroNumero;
    int segundoNumero;
    int diferenca;
    
    printf("Primeiro Número: ");
    scanf("%d", &primeiroNumero);
    printf("Segundo Número: ");
    scanf("%d", &segundoNumero);
    
    
        if(primeiroNumero > segundoNumero){
            diferenca = primeiroNumero - segundoNumero;
            printf("O primeiro número é o maior");
            printf("\nA diferença entre os dois é: %d ", diferenca);
        }else if (primeiroNumero < segundoNumero){
            diferenca = segundoNumero - primeiroNumero;
            printf("O segundo número é o maior");
            printf("\nA diferença entre os dois é: %d ", diferenca);
        }
        
    return 0;
}
