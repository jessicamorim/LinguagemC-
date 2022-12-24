/******************************************************************************

Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    int anoAtual;
    int anoNascimento;
  
      printf("Idade: ");
      scanf("%d", &idade);
      printf("Ano Atual: ");
      scanf("%d", &anoAtual);
      
        anoNascimento = anoAtual - idade;
     
        printf("\n");
        
        printf("Ano de nascimento: %d\n", anoNascimento);
       
        
    return 0;
}
