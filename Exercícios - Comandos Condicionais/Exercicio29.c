/******************************************************************************

Faca uma prova de matematica para criancas que estao aprendendo a somar numeros
inteiros menores do que 100. Escolha numeros aleatorios entre 1 e 100, e mostre 
na tela a pergunta: qual e a soma de a + b, onde a e b sao os numeros aleatorios. 
Peca aresposta. Faca cinco perguntas ao aluno, e mostre para ele as perguntas 
e as respostas corretas, alem de quantas vezes o aluno acertou.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int perguntaUm;
    int perguntaDois;
    int perguntaTres;
    int perguntaQuatro;
    int perguntaCinco;
    int soma = 0;
 
        printf("Qual a soma entre 10 + 12: ");
        scanf("%d", &perguntaUm);
        printf("Qual a soma entre 75 + 12: ");
        scanf("%d", &perguntaDois);
        printf("Qual a soma entre 54 + 16: ");
        scanf("%d", &perguntaTres);
        printf("Qual a soma entre 43 + 20: ");
        scanf("%d", &perguntaQuatro);
        printf("Qual a soma entre 25 + 30: ");
        scanf("%d", &perguntaCinco);
      
            if(perguntaUm == 22){
                printf("\tPergunta 1 - Correta - Resposta 22\n");
                soma = soma + 1;
            }else{
                printf("\tResposta incorreta\n");
            }if(perguntaDois == 87){
                printf("\tPergunta 2 - Correta - Resposta 87\n");
                soma = soma + 1;
            }else{
                printf("\tResposta incorreta\n");
            }if(perguntaTres == 70){
                printf("\tPergunta 3 - Correta - Resposta 70\n");
                soma = soma + 1;
            }else{
                printf("\tResposta incorreta\n");
            }if(perguntaQuatro == 63){
                printf("\tPergunta 4 - Correta - Resposta 63\n");
                soma = soma + 1;
            }else{
                printf("\tResposta incorreta\n");
            }if(perguntaCinco == 55){
                printf("\tPergunta 5 - Correta - Resposta 55\n");
                soma = soma + 1;
            }else{
                printf("\tResposta incorreta\n");
            }
            
            
            printf("Número de questões corretas: %d ", soma);
        
    return 0;
}
