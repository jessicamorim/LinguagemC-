/******************************************************************************

Sejam a e b os catetos de um triangulo, onde a hipotenusa ˆ e obtida pela equacão: 
hipotenusa = √a2 + b2. Fac¸a um programa que receba os valores de a e b e calcule
o valor da hipotenusa atraves da equacão. Imprima o resultado dessa operacão.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float catetoA;
    float quadradocatetoA;
    float catetoB;
    float quadradocatetoB;
    float resultado;
    float hipotenusa;
    
    printf("Cateto A: ");
    scanf("%f", &catetoA);
    printf("Cateto B: ");
    scanf("%f", &catetoB);
    
        quadradocatetoA = catetoA * catetoA;
        quadradocatetoB = catetoB * catetoB;
        resultado = quadradocatetoA + quadradocatetoB;
  
        hipotenusa = sqrt(resultado);
       
    printf("O valor da hipotenusa é: %.1f ", hipotenusa);
  
    return 0;
}
