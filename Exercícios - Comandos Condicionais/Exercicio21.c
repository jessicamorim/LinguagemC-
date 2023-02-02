/******************************************************************************

 Escreva o menu de opc¸oes abaixo. Leia a opcao do usuario e execute a operacao 
 escolhida. Escreva uma mensagem de erro se a opc¸ao for invalida. 
 Escolha a opcao:
 1- Soma de 2 numeros.
 2- Diferenca entre 2 numeros (maior pelo menor).
 3- Produto entre 2 numeros.
 4- Divis~ao entre 2 numeros (o denominador n~ao pode ser zero).
Opcao

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  int opcao;
  int numeroUm;
  int numeroDois; 
  int soma;
  int diferenca;
  int multiplicacao;
  int  divisao;
  
  printf("Primeiro número: ");
  scanf("%d", &numeroUm);
  printf("Segundo número: ");
  scanf("%d", &numeroDois);
  
  soma = numeroUm + numeroDois;
  diferenca = numeroUm - numeroDois;
  multiplicacao = numeroUm * numeroDois;
  divisao = numeroUm / numeroDois;
  
  printf("Opção:\n ");
  printf("1 - Soma de 2 números\n ");
  printf("2 - Diferença de 2 números\n ");
  printf("3 - Produto de 2 números\n ");
  printf("4 - Divisão de 2 números\n ");
  scanf ("%d", &opcao);
  
  switch (opcao)
  {
    case 1 :
    printf ("A soma dos números é: %d ", soma);
    break;
    
    case 2 :
    printf ("A diferença dos números é: %d ", diferenca);
    break;
    
    case 3 :
    printf ("A multiplicação dos números é: %d ", multiplicacao);
    break;
    
    case 4 :
    printf ("A divisão dos números é: %d ", divisao);
    break;
    
    default :
    printf ("Valor invalido!");
  }
 
  return 0;
}
