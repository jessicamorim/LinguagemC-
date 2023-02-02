/******************************************************************************

Leia a nota e o numero de faltas de um aluno, e escreva seu conceito. De acordo 
com a tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma reducao de 
conceito. 

NOTA CONCEITO (ATE 20 FALTAS) CONCEITO (MAIS DE 20 FALTAS)
9.0 ate 10.0             A                   B
7.5 ate 8.9              B                   C
5.0 ate 7.4              C                   D
4.0 ate 4.9              D                   E
0.0 ate 3.9              E                   E


*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota;
    float numeroFalta;
    
    printf("Nota: ");
    scanf("%f", &nota);
    printf("Número de faltas: ");
    scanf("%f", &numeroFalta);
    
        if(nota >= 0.0 && nota <= 3.9 && numeroFalta <= 20){
            printf("E");
        }else if(nota >= 0.0 && nota <= 3.9 && numeroFalta > 20){
            printf("E");   
        }else if(nota >= 4.0 && nota <= 4.9 && numeroFalta <= 20){
            printf("D");
        }else if(nota >= 4.0 && nota <= 4.9 && numeroFalta > 20){
            printf("E");   
        }else if(nota >= 5.0 && nota <= 7.4 && numeroFalta <= 20){
            printf("C");
        }else if(nota >= 5.0 && nota <= 7.4 && numeroFalta > 20){
            printf("D");   
        }else if(nota >= 7.5 && nota <= 8.9 && numeroFalta <= 20){
            printf("B");
        }else if(nota >= 7.5 && nota <= 8.9 && numeroFalta > 20){
            printf("C");   
        }else if(nota >= 9.0 && nota <= 10.0 && numeroFalta <= 20){
            printf("A");
        }else if(nota >= 9.0 && nota <= 10.0 && numeroFalta > 20){
            printf("B");   
        }
        
    return 0;
}
