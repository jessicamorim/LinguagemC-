/******************************************************************************

Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a 
raiz quadrada do numero. Se o número for negativo, mostre uma mensagem dizendo 
que o numero e inválido

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    float raizquadrada;
    
    printf("Número: ");
    scanf("%f", &numero);
    
        if(numero > 0){
            raizquadrada = sqrt(numero);
            printf("A raiz quadrada é: %.1f ", raizquadrada);
        }else if(numero < 0){
            printf("O número é inválido");
        }else{
            printf("O número é zero");
        }
        
    return 0;
}
