/******************************************************************************

Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite
o numero de dias trabalhados pelo encanador e imprima a quantia líquida que devera ser 
paga, sabendo-se que sao descontados 8% para imposto de renda.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float diasTrabalhdos;
    float salario;
    float salarioBruto;
    float salarioLiquido;
    
        printf("Dias Trabalhados: ");
        scanf("%f", &diasTrabalhdos);
    
        salario = 30.0 * diasTrabalhdos;
        salarioBruto = (salario * 8) / 100;
        salarioLiquido = salario - salarioBruto;
    
    printf("O salário liquido é: %.1f ", salarioLiquido);
   
    return 0;
}
