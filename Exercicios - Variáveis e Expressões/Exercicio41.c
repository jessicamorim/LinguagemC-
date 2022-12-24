/******************************************************************************

Faça um programa que leia o valor da hora de trabalho (em reais) e numero de horas 
trabalhadas no mes. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre 
o valor calculado.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valorHoras;
    float horasTrabalhadas;
    float salarioBruto;
    float descontoSalario;
    float salarioLiquido;
    
        printf("Valor Hora: ");
        scanf("%f", &valorHoras);
        printf("Horas Trabalhadas: ");
        scanf("%f", &horasTrabalhadas);
     
        salarioBruto = valorHoras * horasTrabalhadas;
        descontoSalario = (salarioBruto * 10) / 100; 
        salarioLiquido = salarioBruto + descontoSalario;
    
    printf("O salário liquido é: %.1f ", salarioLiquido);
   
    return 0;
}
