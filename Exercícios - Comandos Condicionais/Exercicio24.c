/******************************************************************************

Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Fac¸a um programa em que o usuario entre com o valor e o estado destino do
produto e o programa retorne o prec¸o final do produto acrescido do imposto do 
estado em que ele sera vendido. Se o estado digitado nao for valido, mostrar
uma mensagem de erro.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  int estado;
  float valor;
  float imposto;
  
    
    printf("Valor: ");
    scanf("%f", &valor);
  
        printf("\t1 - Minas Gerais\n ");
        printf("\t2 - São Paulo\n ");
        printf("\t3 - Rio Janeiro\n ");
        printf("\t4 - Mato Grosso do Sul\n ");
        printf("Estado: ");
        scanf("%d", &estado);
  
    if(estado == 1){
        imposto = valor * 1.07;
        printf("Minas Gerais: %.1f ", imposto);
    }else if(estado == 2){
        imposto = valor * 1.12;
        printf("São Paulo: %.1f ", imposto);
    }else if(estado == 3){
        imposto = valor * 1.15;
        printf("Rio de Janeiro: %.1f ", imposto);
    }else if(estado == 4){
        imposto = valor * 1.08;
        printf("Mato Grosso do Sul: %.1f ", imposto);
    }else{
        printf("Estado Inválido");
    }
  return 0;
}
