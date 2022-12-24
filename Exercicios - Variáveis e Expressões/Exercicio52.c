/******************************************************************************

Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido 
proporcionalmente ao valor que cada deu para a realizac¸ao da aposta. Faça um 
programa que leia quanto cada apostador investiu, o valor do premio, e imprima 
quanto cada um ganharia do premio com base no valor investido. 

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float jogadorUm;
    float jogadorDois;
    float jogadorTres;
    float valorAposta;
    float valorPremio;
    float resultado;
    float premioJogadorUm;
    float premioJogadorDois;
    float premioJogadorTres;
 
      printf("Jogador Um: ");
      scanf("%f", &jogadorUm);
      printf("Jogador Dois: ");
      scanf("%f", &jogadorDois);
      printf("Jogador Três: ");
      scanf("%f", &jogadorTres);
      printf("Valor Prêmio: ");
      scanf("%f", &valorPremio);
      
      valorAposta = jogadorUm + jogadorDois + jogadorTres;
      resultado = valorPremio / valorAposta;
      premioJogadorUm = resultado * jogadorUm;
      premioJogadorDois = resultado * jogadorDois;
      premioJogadorTres = resultado * jogadorTres;
       
        printf("\n");
        
        printf("Premio primeiro jogador: %.2f\n", premioJogadorUm);
        printf("Premio primeiro jogador: %.2f\n", premioJogadorDois);
        printf("Premio primeiro jogador: %.2f\n", premioJogadorTres);
        
    return 0;
}
