/******************************************************************************

Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:

• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com des- 
conto)
• a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valorTotal;
    float descontoValor;
    float descontoValorTotal;
    float valorParcelado;
    float comissaoVendedorVista;
    float descontoComissaoVendedorVista;
    float comissaoVendedorParcelado;
    float descontoComissaoVendedorParcelado;
    
      printf("Valor Total: ");
      scanf("%f", &valorTotal);
        
         descontoValor = (valorTotal * 10) / 100; 
         descontoValorTotal = valorTotal - descontoValor;
         
         valorParcelado = valorTotal / 3;
         
        comissaoVendedorVista = (descontoValorTotal * 5) / 100; 
         
        comissaoVendedorParcelado = (valorTotal * 5) / 100; 
         
        printf("\n");
         
    printf("O total a pagar com desconto é: %.1f ", descontoValorTotal);
    printf("\nO valor de cada parcela é: %.1f ", valorParcelado);
    printf("\nA comissão do vendedor da venda à vista é: %.1f ", comissaoVendedorVista);
    printf("\nA comissão do vendedor da parcelada é: %.1f ", comissaoVendedorParcelado);
   
    return 0;
}
