/******************************************************************************

Faça a leitura de tres valores e apresente como resultado a soma dos quadrados dos 
três valores lidos.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeroUm;
    int numeroDois;
    int numeroTres;
    int quadradoUm;
    int quadradoDois;
    int quadradoTres;
    int somaQuadrado;
    
    printf("Numero um: ");
    scanf("%d", &numeroUm);
    printf("Numero dois: ");
    scanf("%d", &numeroDois);
    printf("Numero tres: ");
    scanf("%d", &numeroTres);
    
       quadradoUm = numeroUm * numeroUm;
       quadradoDois = numeroDois * numeroDois;
       quadradoTres = numeroTres * numeroTres;
       
       somaQuadrado = quadradoUm + quadradoDois + quadradoTres;
       
    printf("A soma dos quadrados é: %d ", somaQuadrado);
    
    return 0;
}
