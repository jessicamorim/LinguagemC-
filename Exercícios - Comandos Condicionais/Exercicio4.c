/******************************************************************************

Faça um programa que leia um numero e, caso ele seja positivo, calcule e mostre: 

• O numero digitado ao quadrado 
• A raiz quadrada do numero digitado

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
            quadrado = numero * numero; 
            printf("A raiz quadrada é: %.1f ", raizquadrada);
            printf("\nO quadrado do número é %.1f ", quadrado);
        }else{
            printf("O número igual ou menor que zero");
        }
        
    return 0;
}
