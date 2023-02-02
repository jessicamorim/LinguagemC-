/******************************************************************************

 Leia uma data de nascimento de uma pessoa fornecida atraves de tres numeros 
 inteiros:  Dia, Mes e Ano. Teste a validade desta data para saber se esta e 
 uma data valida. Teste se o dia fornecido e um dia v ´ alido: dia  > 0, dia ≤ 28 
 para o mes de fevereiro (29 se o ano for bissexto), dia ≤ 30 em abril, junho, 
 setembro e novembro, dia ≤ 31 nos outros meses. Teste a validade do mes: mes > 0 
 e mes < 13. Teste a validade do ano: ano ≤ ano atual (use uma constante definida 
 com o valor igual a 2008). Imprimir: “data valida” ou “data invalida” no final da 
 execucao do programa.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  int dia;
  int mes;
  int anoNascimento;
  int anoAtual = 2023;


    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &anoNascimento);
    
        if(mes >= 1 && mes <= 12 && dia >= 1 && dia <= 31){
            if(mes == 1 && dia >= 1 && dia <= 30 && anoAtual >= anoNascimento)
                printf("\nData válida");
            if(mes == 2 && dia >= 1 && dia <= 28 || dia <= 29  && anoAtual >= anoNascimento)
                printf("\nData válida");
            if(mes == 3 && dia >= 1 && dia <= 31 && anoAtual >= anoNascimento)
               printf("\nData válida");
            if(mes == 4 && dia >= 1 && dia <= 30 && anoAtual >= anoNascimento)
                printf("\nData válida");
            if(mes == 5 && dia >= 1 && dia <= 31 && anoAtual >= anoNascimento)
               printf("\nData válida");
            if(mes == 6 && dia >= 1 && dia <= 30 && anoAtual >= anoNascimento)
               printf("\nData válida");
            if(mes == 7 && dia >= 1 && dia <= 31 && anoAtual >= anoNascimento)
               printf("\nData válida");
            if(mes == 8 && dia >= 1 && dia <= 31 && anoAtual >= anoNascimento)
               printf("\nData válida");
            if(mes == 9 && dia >= 1 && dia <= 30 && anoAtual >= anoNascimento)
               printf("\nData válida");
            if(mes == 10 && dia >= 1 && dia <= 31 && anoAtual >= anoNascimento)
               printf("\nData válida");
            if(mes == 11 && dia >= 1 && dia <= 30 && anoAtual >= anoNascimento)
               printf("\nData válida");
            if(mes == 12 && dia >= 1 && dia <= 31 && anoAtual >= anoNascimento)
               printf("\nData válida");
        }else{
            printf("\nData inválida");
        }
            
  return 0;
}
