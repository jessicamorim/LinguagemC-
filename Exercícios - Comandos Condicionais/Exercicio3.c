/******************************************************************************

Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do 
contrário, imprima o numero ao quadrado.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    float raizquadrada;
    float quadrado;
    
    printf("Número: ");
    scanf("%f", &numero);
    
        if(numero > 0){
            raizquadrada = sqrt(numero);
            printf("A raiz quadrada é: %.1f ", raizquadrada);
        }else if(numero < 0){
            quadrado = numero * numero; 
            printf("O quadrado do número é %.1f ", quadrado);
        }else{
            printf("O número é zero");
        }
        
    return 0;
}
