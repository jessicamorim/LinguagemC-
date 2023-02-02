/******************************************************************************

Fac¸a um programa que mostre ao usuario um menu com 4 opções de operações ma
tematicas (as basicas, por exemplo). O usuario escolhe uma das opcoes e o seu 
programa entao pede dois valores numericos e realiza a operacao, mostrando o 
resultado e saindo.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int operacao;
    int primeiroNumero;
    int segundoNumero;
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;
    
    
    printf("\t1 - Soma\n ");
    printf("\t2 - Subtração\n ");
    printf("\t3 - Multiplicação\n ");
    printf("\t4 - Divisão\n ");
    printf("Operação: ");
    scanf("%d", &operacao);
    
        printf("Primeiro Número: ");
        scanf("%d", &primeiroNumero);
        printf("Segundo Número: ");
        scanf("%d", &segundoNumero);
        
        if(operacao == 1){
            soma = primeiroNumero + segundoNumero;
            printf("Soma %d ", soma);
        }else if(operacao == 2){
            subtracao = primeiroNumero - segundoNumero;
            printf("Subtração %d ", subtracao);
        }else if(operacao == 3){
            multiplicacao = primeiroNumero * segundoNumero;
            printf("Multiplicação %d ", multiplicacao);
        }else if(operacao == 4){
            divisao = primeiroNumero * segundoNumero;
            printf("Divisao %d ", divisao);
        }
        
    return 0;
}
