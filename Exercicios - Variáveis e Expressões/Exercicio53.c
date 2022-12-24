/******************************************************************************

Faça um programa para ler as dimensoes de um terreno (comprimento c e largura l),
bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo 
terreno com tela.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float comprimento;
    float largura;
    float preco;
    float area;
    float valorTotal;
 
      printf("Comprimento: ");
      scanf("%f", &comprimento);
      printf("Largura: ");
      scanf("%f", &largura);
      printf("Preço por metro: ");
      scanf("%f", &preco);
     
        area = comprimento * largura;
        valorTotal = area * preco;
        
        printf("\n");
        
        printf("Preço para cercar o terreno R$: %.1f\n", valorTotal);
        
    return 0;
}
