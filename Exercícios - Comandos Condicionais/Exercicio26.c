/******************************************************************************

Leia a distancia em Km e a quantidade de litros de gasolina consumidos por um 
carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo 
com a tabela abaixo:

CONSUMO (Km/l) MENSAGEM
menor que 8   Venda o carro!
entre 8 e 14   Economico! 
maior que 12   Super economico!

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
