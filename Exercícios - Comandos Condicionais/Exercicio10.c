/******************************************************************************

Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre 
seu peso ideal, utilizando as seguintes formulas (onde h corresponde a altura): 

• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7


*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float altura;
    float homem;
    float mulher;
    char sexo;
    
    printf("Sexo - H ou M: ");
    scanf("%c", &sexo);
    printf("Altura: ");
    scanf("%f", &altura);

    
        if(sexo == 'H'){
            homem = (72.7 * altura) - 58;
            printf("Peso ideal %.1f ", homem);
        }
        else if (sexo == 'M'){
            mulher = (62.1 * altura) - 44.7;
            printf("Peso ideal %.1f ", mulher);
        }
        
    return 0;
}
