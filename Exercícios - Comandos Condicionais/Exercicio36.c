/******************************************************************************
Escreva um programa que, dado o valor da venda, imprima a comissao que devera 
ser paga ao vendedor. Para calcular a comissao, considere a tabela abaixo: 
Venda mensal                                          Comissao
Maior ou igual a R$100.000,00                         $700,00 + 16% das vendas
Menor que R$100.000,00 e maior ou igual a R$80.000,00 R$650,00 +14% das vendas
Menor que R$80.000,00 e maior ou igual a R$60.000,00  R$600,00 +14% das vendas
Menor que R$60.000,00 e maior ou igual a R$40.000,00  R$550,00 +14% das vendas
Menor que R$40.000,00 e maior ou igual a R$20.000,00  R$500,00 +14% das vendas
Menor que R$20.000,00                                 R$400,00 +14% das vendas

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  float distancia;
  float quantidadeLitros;
  float consumo;
  
    
    printf("Distância em KM: ");
    scanf("%f", &distancia);
    printf("Quantidade em litros de gasolina: ");
    scanf("%f", &quantidadeLitros);
    
        consumo = distancia / quantidadeLitros;
  
    if(consumo < 8){
        printf("Vender o carro");
    }else if(consumo >= 8 && consumo < 14){
        printf("Econômico");
    }else if(consumo > 14){
        printf("Super econômico");
    }
  return 0;
}
