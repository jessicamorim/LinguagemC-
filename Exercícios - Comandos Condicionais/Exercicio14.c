/******************************************************************************

 A nota final de um estudante e calculada a partir de três notas atribuídas 
 entre o intervalo de 0 ate 10, respectivamente, a um trabalho de laboratório, 
 a uma avaliação semestral e a um exame final. A media das três notas mencionadas 
 anteriormente obedece aos pesos: Trabalho de Laboratorio: 2; Avaliação 
 Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o
 aluno esta reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9
 ou se foi aprovado. Faça todas as verificações necessárias. 

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float trabalhoLaboratorio;
    float avaliacaoSemestral;
    float exameFinal;
    float mediaPonderada;
    
    printf("Nota do trabalho de laboratorio: ");
    scanf("%f", &trabalhoLaboratorio);
    printf("Nota da avaliação semestral: ");
    scanf("%f", &avaliacaoSemestral);
    printf("Nota exame final: ");
    scanf("%f", &exameFinal);
    
        mediaPonderada = ((trabalhoLaboratorio * 2) + (avaliacaoSemestral * 3) + (exameFinal * 5)) / 3;
        
        if(mediaPonderada >= 0.0 && mediaPonderada <= 2.9){
           printf("Reprovado");
        }else if(mediaPonderada >= 3.0 && mediaPonderada <= 4.9){
           printf("Recuperação");
        }else if(mediaPonderada >= 5.0){
           printf("Aprovado");
        }
    
    return 0;
}
