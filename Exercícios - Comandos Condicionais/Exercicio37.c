/******************************************************************************

As tarifas de certo parque de estacionamento sao as seguintes: 
• 1 a e 2a hora - R$ 1,00 cada
• 3 a e 4a hora - R$ 1,40 cada
• 5 a hora e seguintes - R$ 2,00 cada
O numero de horas a pagar e sempre inteiro e arredondado por excesso. 
Deste modo, quem estacionar durante 61 minutos pagara por duas horas, 
que e o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos 
de chegada ao parque e partida deste sao apresentados na forma de pares de 
inteiros, representando horas e minutos. 
Por exemplo, o par 12 50 representara “dez para a uma da tarde”. Pretende-se 
criar um  programa que, lidos pelo teclado os momentos de chegada e de partida, 
escreva na tela o preco cobrado pelo estacionamento. Admite-se que a chegada e 
a partida se dao com intervalo nao superior a 24 horas. Portanto, se uma dada 
hora de chegada for superior a da partida, isso n ` ao˜ e uma situacao de erro, 
antes significar a que a partida ocorreu no dia seguinte ao da chegada.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  int horaChegada;
  int minutoChegada;
  int horaMinutoChegada;
  int horaPartida;
  int minutoPartida;
  int horaMinutoPartida;
  int tarifa;
  int tarifaCobrada;
  int tarifaCobradaUm;
  int tarifaCobradaDois;
  int tarifaCobradaTres;

    printf ("Hora da chegada: ");
    scanf ("%d", &horaChegada);
    printf ("Minuto da chegada: ");
    scanf ("%d", &minutoChegada);

        horaMinutoChegada = horaChegada * 60;

    printf ("Hora da partida: ");
    scanf ("%d", &horaPartida);
    printf ("Minuto da partida: ");
    scanf ("%d", &minutoPartida);

        horaMinutoPartida = horaPartida * 60;

        tarifa = (horaMinutoPartida + minutoPartida) - (horaMinutoChegada + minutoChegada);

        if (tarifa < 60){
            printf ("Valor da tarifa R$1,00");
        }else if (tarifa >= 60 && tarifa <= 120){
            printf ("Valor da tarifa R$1,00");
        }else if (tarifa > 120 && tarifa <= 180){
            printf ("Valor da tarifa R$1,40");
        }else if (tarifa > 180 && tarifa <= 240){
            printf ("Valor da tarifa R$1,40");
        }else if (tarifa > 240 && tarifa <= 300){
            printf ("Valor da tarifa R$2,00");
        }else if (tarifa > 300){
            tarifaCobradaUm = tarifa / 60;
            tarifaCobradaDois = tarifaCobradaUm - 5;
            tarifaCobradaTres = tarifaCobradaDois * 2;
            printf ("Valor da tarifa R$%d,00 ", tarifaCobradaTres);
        }  

  return 0;
}
