/******************************************************************************

O custo ao consumidor de um carro novo e a soma do custo de fabrica, da comissao
do distribuidor, e dos impostos. A comissao e os impostos s ˜ ao calculados sobre 
o custo de fabrica, de acordo com a tabela abaixo. Leia o custo de f abrica e 
escreva o custo ao consumidor.
CUSTO DE FABRICA               %         DO DISTRIBUIDOR % DOS IMPOSTOS
ate R$12.000,00                5            isento
entre R$12.000,00 e 25.000,00  10           15
acima de R$25.000,00           15           20


*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float custoFabrica;
    float comissaoDistribuidor;
    float impostos;
    float custoConsumidor;
    
        printf("Custo de Fabrica: ");
        scanf("%f", &custoFabrica);
           
           if(custoFabrica < 12000){
            comissaoDistribuidor = (custoFabrica * 5) / 100;
           }else if(custoFabrica > 12000 && custoFabrica < 25000){
            comissaoDistribuidor = (custoFabrica * 10) / 100;
            impostos = (custoFabrica * 15) / 100;
           }else if(custoFabrica > 25000){
            comissaoDistribuidor = (custoFabrica * 15) / 100;
            impostos = (custoFabrica * 20) / 100;
           }
           
           custoConsumidor = custoFabrica + comissaoDistribuidor + impostos;
           printf("O custo ao consumidor: %.1f ", custoConsumidor);

    return 0;
}
