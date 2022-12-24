/******************************************************************************

Receba a altura do degrau de uma escada e a altura que o usuario deseja alcançar
subindo a escada. Calcule e mostre quantos degraus o usuario dever ´ a subir para atingir 
seu objetivo.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float alturaDegrau;
    float alturaDeseja;
    float altura;
    
      printf("Altura Degrau: ");
      scanf("%f", &alturaDegrau);
      printf("Altura Deseja: ");
      scanf("%f", &alturaDeseja);
        
        altura = alturaDeseja / alturaDegrau;
         
        printf("\n");
         
    printf("O total de degraus para subir é: %.1f degraus", altura);

    return 0;
}
