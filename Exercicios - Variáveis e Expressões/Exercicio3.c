/******************************************************************************

Peça ao usuario para digitar três valores inteiros e imprima a soma deles.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeroUm;
    int numeroDois;
    int numeroTres;
    int soma;
    
    printf("Número um: ");
    scanf("%d", &numeroUm);
    printf("Número dois: ");
    scanf("%d", &numeroDois);
    printf("Número três: ");
    scanf("%d", &numeroTres);
    
        soma = numeroUm + numeroDois + numeroTres;
    
    printf("A soma é: %d ", soma);
    
    return 0;
}
