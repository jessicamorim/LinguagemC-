/******************************************************************************

Fac¸a um algoritmo que calcule o IMC de uma pessoa e mostre sua classificac¸ao de
acordo com a tabela abaixo:
IMC             Classificacao
< 18,5         Abaixo do Peso
18,6 - 24,9    Saudavel 
25,0 - 29,9    Peso em excesso
30,0 - 34,9    Obesidade Grau I
35,0 - 39,9    Obesidade Grau II(severa)
≥ 40,0         Obesidade Grau III(morbida)

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float altura;
    float peso;
    float imc;
    
        printf("Peso: ");
        scanf("%f", &peso);
        printf("Altura: ");
        scanf("%f", &altura);
        
            imc = peso / (altura * altura);
            printf("O imc é: %.1f ", imc);
            
            if(imc < 18.5)
                printf("Abaixo do Peso");
            if(imc > 18.6 && imc < 24.9)
                printf("Saudável");
            if(imc > 25.0 && imc < 29.9)
                printf("Peso em excesso");
            if(imc > 30.0 && imc < 34.9)
                printf("Obesidade Grau I");
            if(imc > 35.0 && imc < 39.9)
                printf("Obesidade Grau II(severa)");
            if(imc >= 40.0)
                printf("Obesidade Grau III(mórbida)");

    return 0;
}
