/*******************************************************************************

Faça um programa que receba um numero inteiro e verifique se este número e par 
ou ımpar.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    
    printf("Número: ");
    scanf("%d", &numero);
    
        if(numero % 2 == 0){
            printf("O número é par");
        }else{
            printf("O número é impar");
        }
        
    return 0;
}
