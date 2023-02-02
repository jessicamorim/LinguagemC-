/******************************************************************************

Leia a idade e o tempo de servico de um trabalhador e escreva se ele pode ou nao 
se aposentar. As condicoes para aposentadoria sao

• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  int idade;
  int tempoServico;
 
  printf("Idade: ");
  scanf("%d", &idade);
  printf("Tempo Servico de um trabalhador: ");
  scanf("%d", &tempoServico);
  
    if(idade >= 65 || tempoServico >= 30 || idade >= 60 && tempoServico >= 25){
        printf("Pode Aposentar");
    }else 
        printf("Não pode Aposentar");
  return 0;
}
