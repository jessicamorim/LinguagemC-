/******************************************************************************

A importancia de R$ 780.000,00 será dividida entre três ganhadores de um concurso. 

Sendo que da quantia total:
• O primeiro ganhador recebera 46%; 
• O segundo recebera 32%; 
• O terceiro recebera o restante; 

Calcule e imprima a quantia ganha por cada um dos ganhadores.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valorPrimeiro;
    float valorSegundo;
    float valorTerceiro;
    
    valorPrimeiro = (780.000 * 46) / 100;
    valorSegundo = (780.000 * 32) / 100;
    valorTerceiro = (780.000 * 22) / 100;
    
    printf("\nA quantia recebida pelo primeiro é: %.1f ", valorPrimeiro);
    printf("\nA quantia recebida pelo segundo é: %.1f ", valorSegundo);
    printf("\nA quantia recebida pelo terceiro é: %.1f ", valorTerceiro);
    
    return 0;
}
