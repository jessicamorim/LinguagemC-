/******************************************************************************
Escrever um programa que leia o codigo do produto escolhido do cardapio de uma 
lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele 
lanche. Considere que a cada execucao somente sera calculado um pedido. O cardapio 
da lanchonete segue o padrao abaixo: 
Especificacao     Codigo    Preco
Cachorro Quente    100      1.20
Bauru Simples      101      1.30
Bauru com Ovo      102      1.50
Hamburguer         103      1.20
Cheeseburguer      104      1.70
Suco               105      2.20
Refrigerante       106      1.00

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  int codigoProduto;
  int quantidade;
  float pedido;
  
    printf("Qauntidade: ");
    scanf("%d", &quantidade);
    
    printf("100 - Cachorro Quente\n ");
    printf("101 - Bauru Simples\n ");
    printf("102 - Bauru com Ovo\n ");
    printf("103 - Hamburguer\n ");
    printf("104 - Cheeseburguer\n ");
    printf("105 - Suco\n ");
    printf("106 - Refrigente\n ");
    printf("Código do produto: ");
    scanf("%d", &codigoProduto);
    
            if(codigoProduto == 100){
            pedido = quantidade * 1.20;
            printf("Valor do pedido %.1f ", pedido);
        }else if(codigoProduto == 101){
            pedido = quantidade * 1.30;
            printf("Valor do pedido %.1f ", pedido);
        }else if(codigoProduto == 102){
            pedido = quantidade * 1.50;
            printf("Valor do pedido %.1f ", pedido);
        }else if(codigoProduto == 103){
            pedido = quantidade * 1.20;
            printf("Valor do pedido %.1f ", pedido);
        }else if(codigoProduto == 104){
            pedido = quantidade * 1.70;
            printf("Valor do pedido %.1f ", pedido);
        }else if(codigoProduto == 105){
            pedido = quantidade * 2.20;
            printf("Valor do pedido %.1f ", pedido);
        }else if(codigoProduto == 106){
            pedido = quantidade * 1.00;
            printf("Valor do pedido %.1f ", pedido);
        }
    
  return 0;
}
