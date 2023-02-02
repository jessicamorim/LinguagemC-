/******************************************************************************

Leia uma data e determine se ela e valida. Ou seja, verifique se o mes esta 
entre 1 e 12, e se o dia existe naquele mes. Note que Fevereiro tem 29 dias 
em anos bissextos, e 28 dias em anos nao bissextos.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dia;
    int mes;
    int ano;
    
        printf("Dia: ");
        scanf("%d", &dia);
        printf("Mês: ");
        scanf("%d", &mes);
        printf("Ano: ");
        scanf("%d", &ano);
   
        if(mes >= 1 && mes <= 12){
            printf("Mês %d:\n", mes);
            printf("Mês válido\n");
        }else{
            printf("Mês inválido\n");
        }
        
        if(mes == 1 && dia >= 1 && dia <= 30){
            printf("Dia %d:\n", dia);
            printf("Dia válido");
        }else if(mes == 2 && dia >= 1 && dia <= 28){
            printf("Dia %d:\n ", dia);
            printf("Dia válido");
        }else if(mes == 2 && dia >= 1 && dia <= 29){
            printf("Dia %d:\n ", dia);
            printf("Dia válido - ano bissexto");
        }else if(mes == 3 && dia >= 1 && dia <= 31){
            printf("Dia %d:\n ", dia);
            printf("Dia válido");
        }else if(mes == 4 && dia >= 1 && dia <= 30){
            printf("Dia %d:\n", dia);
            printf("Dia válido");   
        }else if(mes == 5  && dia >= 1 && dia <= 31){
            printf("Dia %d:\n ", dia);
            printf("Dia válido"); 
        }else if(mes == 6 && dia >= 1 && dia <= 30){
            printf("Dia %d:\n ", dia);
            printf("Dia válido");
        }else if(mes == 7 && dia >= 1 && dia <= 31){
            printf("Dia %d:\n ", dia);
            printf("Dia válido"); 
        }else if(mes == 8 && dia >= 1 && dia <= 30){
            printf("Dia %d:\n ", dia);
            printf("Dia válido"); 
        }else if(mes == 9 && dia >= 1 && dia <= 30){
            printf("Dia %d:\n ", dia);
            printf("Dia válido");  
        }else if(mes == 10 && dia >= 1 && dia <= 31){
            printf("Dia %d:\n ", dia);
            printf("Dia válido");  
        }else if(mes == 11 && dia >= 1 && dia <= 30){
            printf("Dia %d:\n ", dia);
            printf("Dia válido");  
        }else if(mes == 12 && dia >= 1 && dia <= 31){
            printf("Dia %d:\n ", dia);
            printf("Dia válido");   
        }else{
            printf("Dia inválido\n");
        }

    return 0;
}
