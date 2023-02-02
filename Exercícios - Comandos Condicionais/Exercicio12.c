/******************************************************************************

Ler um numero inteiro. Se o número lido for negativo, escreva a mensagem 
“Número inválido”. Se o número for positivo, calcular o logaritmo deste numero. 

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    float logaritmo;
    
    printf("Número: ");
    scanf("%f", &numero);
   
    
        if(numero < 0){
            printf("Número inválido");
        }else{
            logaritmo = log(numero);
            printf("O log do número é: %.1f ", logaritmo);
        }
        
    return 0;
}
