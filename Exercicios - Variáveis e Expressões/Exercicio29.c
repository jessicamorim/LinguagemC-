/******************************************************************************

Leia quatro notas, calcule a media aritmética e imprima o resultado.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float notaUm;
    float notaDois;
    float notaTres;
    float notaQuatro;
    float mediaAritimetica;
    
    printf("Nota um: ");
    scanf("%f", &notaUm);
    printf("Nota dois: ");
    scanf("%f", &notaDois);
    printf("Nota três: ");
    scanf("%f", &notaTres);
    printf("Nota quatro: ");
    scanf("%f", &notaQuatro);
    
        mediaAritimetica = (notaUm + notaDois + notaTres + notaQuatro) / 4;
    
    printf("A media aritmética é: %.2f ", mediaAritimetica);
    
    return 0;
}
