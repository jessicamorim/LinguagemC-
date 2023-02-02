/******************************************************************************

Uma empresa decide dar um aumento aos seus funcionarios de acordo com uma tabela 
que considera o salario atual e o tempo de servic¸o de cada funcionario. Os 
funcionarios com menor salario terao um aumento proporcionalmente maior do que os 
funcionarios com um salario maior, e conforme o tempo de servico na empresa, cada 
funcionario ira receber um bonus adicional de salario. Faca um programa que leia: 

• o valor do salario atual do funcionario; 
• o tempo de servic¸o desse funcionario na empresa (numero de anos de trabalho na 
empresa).

Use as tabelas abaixo para calcular o salario reajustado deste funcionario e imprima 
o valor do salario final reajustado, ou uma mensagem caso o funcionario nao tenha 
direito a nenhum aumento.
Salario Atual     Reajuste(%)      Tempo de Servico Bonus 
Ate 500,00          25%             Abaixo de 1 ano Sem bonus 
Ate 1000,00         20%             De 1 a 3 anos 100,00
Ate 1500,00         15%             De 4 a 6 anos 200,00
Ate 2000,00         10%             De 7 a 10 anos 300,00
Acima de 2000,00 Sem reajuste       Mais de 10 anos 500,00


*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario;
    float tempoServico;
    float reajuste;
    float novoSalario;
    float bonus;
   
        printf("Salário: ");
        scanf("%f", &salario);
        printf("Tempo de Serviço em anos: ");
        scanf("%f", &tempoServico);
        
           
           if(salario < 500 && tempoServico < 1){
            reajuste = (salario * 25) / 100;
            novoSalario = salario + reajuste;
            printf("O valor do novo salário: %.1f ", novoSalario);
           }else if(salario > 500 && salario < 1000 && tempoServico > 1 && tempoServico < 3){
            reajuste = (salario * 20) / 100;
            novoSalario = salario + reajuste + 100;
            printf("O valor do novo salário: %.1f ", novoSalario);
           }else if(salario > 1000 && salario < 1500 && tempoServico > 4 && tempoServico < 6){
            reajuste = (salario * 15) / 100;
            novoSalario = salario + reajuste + 200;
            printf("O valor do novo salário: %.1f ", novoSalario);
           }else if(salario > 1500 && salario < 2000 && tempoServico > 7 && tempoServico < 10){
            reajuste = (salario * 10) / 100;
            novoSalario = salario + reajuste + 300;
            printf("O valor do novo salário: %.1f ", novoSalario);
           }else if(salario > 2000 && tempoServico > 10){
            reajuste = 0;
            novoSalario = salario + reajuste + 500;
            printf("O valor do novo salário: %.1f ", novoSalario);
           }else{
               printf("Sem reajuste");
           }

    return 0;
}
