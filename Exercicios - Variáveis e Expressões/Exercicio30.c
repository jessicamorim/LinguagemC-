/******************************************************************************

Leia um valor em real e a cotacão do dolar. Em seguida, imprima o valor correspondente
em dolares. 

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float real;
    float dolar;
    
    printf("Real: ");
    scanf("%f", &real);
  
        dolar = real / 5.21;
    
    printf("O valor em dolar é: %.2f ", dolar);
    
    return 0;
}
