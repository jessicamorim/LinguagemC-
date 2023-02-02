/*******************************************************************************

Faça um programa que leia 2 notas de um aluno, verifique se as notas sao válidas
é exiba na tela a media destas notas. Uma nota válida deve ser, obrigatoriamente, 
um valor entre 0.0 e 10.0, onde caso a nota nao possua um valor válido, este 
fato deve ser informado ao usuario e o programa termina. 

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float primeiraNota;
    float segundaNota;
    float media;
    
    printf("Primeira Nota: ");
    scanf("%f", &primeiraNota);
        if(primeiraNota < 0.0 && primeiraNota > 10.0){
            printf("Nota inválida - programa será encerrado...");
            exit(1);
        }
    printf("Segunda Nota: ");
    scanf("%f", &segundaNota);
        if(segundaNota < 0.0 && segundaNota > 10.0){
            printf("Nota inválida - programa será encerrado...");
            exit(1);
        }
        
        media = (primeiraNota + segundaNota) / 2;
        
        printf("\nA média é: %.1f ", media);
    
    return 0;
}
