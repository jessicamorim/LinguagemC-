/******************************************************************************

Faça um programa para leia o horario(hora, minuto e segundo) de inicio e a 
duracão, em segundos, de uma experiencia biolôgica. O programa deve resultar
com o novo horário(hora, minuto e segundo) do termino da mesma.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int segundos;
    int resultadoMinuto;
    int resultadoSegundo;
    int resultadoHora;
    int durancaoEvento;
    int resultadoDurancaoEvento;
  
      printf("Segundos: ");
      scanf("%d", &segundos);
      printf("Duração Experiência Biológica (segundos): ");
      scanf("%d", &durancaoEvento);
     
        resultadoHora = segundos / 3600;
        resultadoMinuto = segundos / 60;
        resultadoSegundo = segundos % 60;
        
        printf("\n");
        
        printf("Inicio\n");
        printf("Hora: %d\n", resultadoHora);
        printf("Minuto: %d\n", resultadoMinuto);
        printf("Segundo: %d", resultadoSegundo);
        
        resultadoDurancaoEvento = segundos + durancaoEvento;
        
        resultadoHora = durancaoEvento / 3600;
        resultadoMinuto = durancaoEvento / 60;
        resultadoSegundo = durancaoEvento % 60;
        
        printf("\n\n");
        
        printf("Término\n");
        printf("Hora: %d\n", resultadoHora);
        printf("Minuto: %d\n", resultadoMinuto);
        printf("Segundo: %d", resultadoSegundo);
        
    return 0;
}
