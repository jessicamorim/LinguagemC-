/******************************************************************************

Receba o salario-base de um funcion ´ ario. Calcule e imprima o salário a receber, sabendo-
se que esse funcionario tem uma gratificac¸ ´ ao de 5% sobre o salário-base. Além disso, 
ele paga 7% de imposto sobre o salario-base. 

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario;
    float descontoSalario;
    float bonusSalario;
    float salarioLiquido;
    
      printf("Salario: ");
      scanf("%f", &salario);
        
         descontoSalario = (salario * 7) / 100; 
         bonusSalario  = (salario * 5) / 100; 
         
         salarioLiquido = salario + bonusSalario - descontoSalario;
         
    printf("O salário liquido é: %.1f ", salarioLiquido);
   
    return 0;
}
