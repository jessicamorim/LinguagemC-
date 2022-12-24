/******************************************************************************

Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x;
    float y;
    float ladoX;
    float ladoY;
    float ladoXY;
    float resultado;
    
  
      printf("X: ");
      scanf("%f", &x);
      printf("Y: ");
      scanf("%f", &y);
      
       ladoX = (x - 0);
       ladoY = (y - 0);
       ladoXY = (ladoX * ladoX) + (ladoY * ladoY);
       resultado = sqrt(ladoXY);
       
     
        printf("\n");
        
        printf("Resultado: %.1f\n", resultado);
        
    return 0;
}
