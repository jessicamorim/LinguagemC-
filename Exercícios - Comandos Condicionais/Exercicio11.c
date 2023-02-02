/******************************************************************************

Escreva um programa que leia um numero inteiro maior do que zero e devolva, 
na tela, a soma de todos os seus algarismos. Por exemplo, ao numero 251 
corresponder a o valor 8 (2 + 5 + 1). Se o numero lido não for maior do 
que zero, o programa terminara com a mensagem “Numero inválido”.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    int centena;
    int dezena;
    int unidade;
    int algorismo;
    
 
        printf("Número de 100 à 999: ");
        scanf("%d", &numero);
        
        if(numero >= 100 && numero <= 999){
            centena = numero / 100;
            dezena = (numero % 100) / 10;
            unidade = numero % 10;
            algorismo = centena +  dezena + unidade; 
            printf("A soma dos algorismos é: %d ", algorismo);
        }else{
            printf("Número inválido");
        }
        
    return 0;
}
