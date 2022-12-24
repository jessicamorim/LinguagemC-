/******************************************************************************
Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valor;
    float desconto;
    float descontoReal;
   
    printf("Valor produto: ");
    scanf("%f", &valor);
    
    desconto = (valor * 12) / 100;
    descontoReal = valor - desconto;
       
    printf("O valor com desconto é: %.1f ", descontoReal);
  
    return 0;
}
