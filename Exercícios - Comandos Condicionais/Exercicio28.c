/******************************************************************************

Faca um programa que leia tres numeros inteiros positivos e efetue o calculo de
uma das seguintes medias de acordo com um valor numerico digitado pelo usuario: 
3
(a) Geometrica: √3 x ∗ y ∗ z
(b) Ponderada: x+2∗y+3∗z / 6
(c) Harmonica: 1/ 1 x + 1 y + 1 z
(d) Aritmetica: x+y+z

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numeroUm;
    float numeroDois;
    float numeroTres;
    float media;
    float geometrica;
    float ponderada;
    float harmonica;
    float aritmetica;
    
    
        printf("Número Um: ");
        scanf("%f", &numeroUm);
        printf("Número Dois: ");
        scanf("%f", &numeroDois);
        printf("Números três: ");
        scanf("%f", &numeroTres);
        
            printf("\t1 - Geométrica\n ");
            printf("\t2 - Ponderada\n ");
            printf("\t3 - Harmônica\n ");
            printf("\t4 - Aritmética\n ");
            printf("Média: ");
            scanf("%f",  &media);
            
                if(media == 1){
                   geometrica = (numeroUm * numeroDois * numeroTres); 
                   1/3 * sqrt(geometrica);
                   printf("Média Geometrica: %.1f ", geometrica);
                }else if(media == 2){
                    ponderada = ((numeroUm + 2) * (numeroDois + 3) * (numeroTres)) / 6;
                    printf("Média Ponderada: %.1f ", ponderada);
                }else if(media == 3){
                    harmonica = 1 / ((1 / numeroUm) + (1 + numeroDois) + (1 / numeroTres));
                    printf("Média Harmônica: %.1f ", harmonica);
                }else if(media == 4){
                    aritmetica = (numeroUm + numeroDois + numeroTres) / 3;
                    printf("Média aritmetica: %.1f ", aritmetica);
                }
        
    return 0;
}
