/******************************************************************************

Leia o salario de um funcionário. Calcule e imprima o valor do novo salário, sabendo que
ele recebeu um aumento de 25%.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario;
    float desconto;
    float novoSalario;
   
    printf("Valor produto: ");
    scanf("%f", &salario);
    
    desconto = (salario * 25) / 100;
    novoSalario = salario + desconto;
       
    printf("O valor do nosso salário é: %.1f ", novoSalario);
  
    return 0;
}
