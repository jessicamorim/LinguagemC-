/******************************************************************************

Leia o salario de um trabalhador e o valor da prestação de um emprestimo. Se a 
prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso
contrario imprima: Empréstimo concedido.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int salario;
    int valorPrestacao;
    int emprestimo;
    
    printf("Salário: ");
    scanf("%d", &salario);
    printf("Valor do emprestimo: ");
    scanf("%d", &valorPrestacao);
    
    emprestimo = salario * (20/100); 
    
        if(valorPrestacao < emprestimo){
            printf("Empréstimo não concedido");
        }
        if (valorPrestacao >= emprestimo){
            printf("Empréstimo concedido");
        }
        
    return 0;
}
