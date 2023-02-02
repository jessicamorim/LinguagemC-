/******************************************************************************

Determine se um determinado ano lido e bissexto. Sendo que um ano e bissexto se 
for divisıvel por 400 ou se for divisıvel por 4 e nao for divisıvel por 100. 
Por exemplo:
1988, 1992, 1996

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  int ano;
    
    printf("Ano: ");
    scanf("%d", &ano);
  
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0 ){
        printf("É ano bissexto");
    }else 
        printf("Não é ano bissexto");
  return 0;
}
