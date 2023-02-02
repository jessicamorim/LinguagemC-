/******************************************************************************

Faca um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostra qual a classificac¸ao dessa pessoa. 
Altura Peso
Ate 60 Entre 60 e 90 (Inclusive) Acima de 90
Menor que 1,20 A D G
De 1,20 a 1,70 B E H
Maior que 1,70 C F I

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  float altura;
  float peso;
  
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Peso: ");
    scanf("%f", &peso);


    if(altura < 1.20){
        if(peso < 60){
            printf("A");
        }else if(peso >= 60 && peso < 90){
            printf("D");
        }else if(peso >= 90){
            printf("G");
        }
    }else if(altura >= 1.20 && altura > 1.70){
        if(peso < 60){
            printf("B");
        }else if(peso >= 60 && peso < 90){
            printf("E");
        }else if(peso >= 90){
            printf("H");
        }
    }else if(altura >= 1.70){
        if(peso < 60){
            printf("C");
        }else if(peso >= 60 && peso < 90){
            printf("F");
        }else if(peso >= 90){
            printf("I");
        }
    } 
  return 0;
}
