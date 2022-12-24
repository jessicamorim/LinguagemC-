/******************************************************************************

Leia um numero real e imprima a quinta parte deste número.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;
    float quintaParte;
    
    printf("Número: ");
    scanf("%f", &numero);
    
        quintaParte = numero / 5;
        
    printf("A quinta parte do número é: %.1f ", quintaParte);
    
    return 0;
}
