/******************************************************************************

Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

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
  
      printf("Segundos: ");
      scanf("%d", &segundos);
      
        resultadoHora = segundos / 3600;
        resultadoMinuto = segundos / 60;
        resultadoSegundo = segundos % 60;
        
        printf("\n");
         
    printf("Hora: %d\n", resultadoHora);
    printf("Minuto: %d\n", resultadoMinuto);
    printf("Segundo: %d", resultadoSegundo);

    return 0;
}
