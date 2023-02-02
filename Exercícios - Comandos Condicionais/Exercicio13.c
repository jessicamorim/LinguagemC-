/******************************************************************************

Fac¸a um algoritmo que calcule a media ponderada das notas de 3 provas. A 
primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, 
mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. 
A nota para aprovação deve ser igual ou superior a 60 pontos.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float primeiraNota;
    float segundaNota;
    float terceiraNota;
    float mediaPonderada;
    
    printf("Primeira Nota: ");
    scanf("%f", &primeiraNota);
    printf("Segunda Nota: ");
    scanf("%f", &segundaNota);
    printf("Terceira Nota: ");
    scanf("%f", &terceiraNota);
    
    mediaPonderada = primeiraNota + segundaNota + (terceiraNota * 2) / 3;
   
    
        if(mediaPonderada > 6.0){
            printf("Aprovado");
        }else{
            printf("Reprovado");
        }
        
    return 0;
}
