/******************************************************************************

Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o prec¸o antigo,
calcule e escreva o preco novo, e escreva uma mensagem em funcao do preco novo 
(de acordo com a segunda tabela).
PRECO ANTIGO   PERCENTUAL DE AUMENTO
ate R$ 50              5%
entre R$ 50 e R$ 100   10%
acima de R$ 100        15%

PRECO                            NOVO MENSAGEM
ate R$ 80                           Barato
entre R$ 80 e R$ 120 (inclusive)    Normal
entre R$ 120 e R$ 200 (inclusive)   Caro
acima de R$ 200                     Muito caro


*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float velhoPreco;
    float novoPreco;
    
    printf("Preço: ");
    scanf("%f", &velhoPreco);
    
        if(velhoPreco < 50.0){
            novoPreco = velhoPreco * 1.05;
            printf("Preço novo:  %.1f", novoPreco);
        }else if(velhoPreco >= 50.0 && velhoPreco <= 100.0){
            novoPreco = velhoPreco * 1.10;
            printf("Preço novo:  %.1f", novoPreco);
        }else if(velhoPreco > 100.0){
            novoPreco = velhoPreco * 1.15;
            printf("Preço novo:  %.1f", novoPreco);
        }
        
        if(novoPreco < 80){
           printf("\nBarato"); 
        }else if(novoPreco >= 80 && novoPreco < 120){
           printf("\nNormal"); 
        }else if(novoPreco >= 120 && novoPreco < 200){
           printf("\nCaro"); 
        }else if(novoPreco >= 200){
           printf("\nMuito Caro"); 
        }
    return 0;
}
