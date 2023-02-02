/******************************************************************************

Fac¸a um programa para verificar se um determinado numero inteiro e divisıvel 
por 3 ou 5, mas nao simultaneamente pelos dois.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    
    printf("Número: ");
    scanf("%d", &numero);
 
        if(numero % 3 == 0 || numero % 5 == 0){
            printf("%d é divisível por 3 ou 5 ", numero);
        }else{
            printf("%d não é divisível por 3 ou 5 ", numero);
        }
        
    return 0;
}
