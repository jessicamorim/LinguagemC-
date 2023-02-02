/******************************************************************************

Dados tres valores,  A, B, C, verificar se eles podem ser valores dos lados de 
um triangulo e, se forem, se e um triangulo escaleno, equilatero ou isoscele, 
considerando os seguintes conceitos:

• O comprimento de cada lado de um triangulo e menor do que a soma dos outros
dois lados.
• Chama-se equilatero o triangulo que tem tres lados iguais. 
• Denominam-se isosceles o triangulo que tem o comprimento de dois lados iguais. 
• Recebe o nome de escaleno o triangulo que tem os tr ˆ es lados diferentes.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  float ladoA;
  float ladoB;
  float ladoC;

  printf ("Lado A: ");
  scanf ("%f", &ladoA);
  printf ("Lado B: ");
  scanf ("%f", &ladoB);
  printf ("Lado C: ");
  scanf ("%f", &ladoC);

  if (ladoA < (ladoB + ladoC) || ladoB < (ladoB + ladoA)
      || ladoC < (ladoB + ladoA))
    {if (ladoA != ladoB && ladoA != ladoC){
	    printf ("Triângulo Escaleno");
	}else if (ladoA == ladoB && ladoA == ladoC && ladoB != ladoC
	       || ladoB == ladoA && ladoB == ladoC && ladoA != ladoC
	       || ladoC == ladoA && ladoC == ladoB && ladoA != ladoB)   {
	    printf ("Triângulo Isósceles");
	}else if (ladoA == ladoB && ladoA == ladoC){
	    printf ("Triângulo Equilátero");
	}
  }

  return 0;
}
