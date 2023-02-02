/******************************************************************************

Faca um programa que receba tres numeros e mostre-os em ordem crescente

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  int numeroUm;
  int numeroDois;
  int numeroTres;

    printf("Primeiro número: ");
    scanf("%d", &numeroUm);
    printf("Segunda número: ");
    scanf("%d", &numeroDois);
    printf("Terceiro número: ");
    scanf("%d", &numeroTres);

  
    if(numeroUm < numeroDois && numeroUm < numeroDois && numeroDois < numeroTres){
        printf("O número em ordem crescente: %d %d %d ", numeroUm, numeroDois , numeroTres);
    }else if(numeroDois < numeroUm && numeroDois < numeroTres && numeroUm < numeroTres){
        printf("O número em ordem crescente: %d %d %d ", numeroDois , numeroUm , numeroTres);
    }else if(numeroTres < numeroUm && numeroTres < numeroDois && numeroUm < numeroDois){
        printf("O número em ordem crescente: %d %d %d ", numeroTres , numeroUm , numeroDois);
    }else if(numeroUm < numeroDois && numeroUm < numeroDois && numeroTres < numeroDois){
        printf("O número em ordem crescente: %d %d %d ", numeroUm , numeroTres , numeroDois);
    }else if(numeroDois < numeroUm && numeroDois < numeroTres && numeroTres < numeroUm){
        printf("O número em ordem crescente: %d %d %d ", numeroDois , numeroTres , numeroUm);
    }else if(numeroTres < numeroUm && numeroTres < numeroDois && numeroDois < numeroUm){
        printf("O número em ordem crescente: %d %d %d ", numeroTres , numeroDois , numeroUm);
    }
  return 0;
}
