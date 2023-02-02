/******************************************************************************

Calcule as raızes da equacao de 2 o grau.
Lembrando que:
x = −b ± √∆ / 2a
Onde
∆ = B
2 − 4ac
E ax2 + bx + c = 0 representa uma equac¸ao de 2 o grau.
A variavela tem que ser diferente de zero. Caso seja igual, imprima a mensagem 
“Nao e equacao de segundo grau”. 

• Se ∆ < 0, nao existe real. Imprima a mensagem Nao existe raiz.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz unica.
• Se ∆ ≥ 0, imprima as duas raızes reais.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float letraA;
    float letraB;
    float letraC;
    float delta;
    float x1;
    float x2;
    
    
        printf("Letra A: ");
        scanf("%f", &letraA);
        printf("Letra B: ");
        scanf("%f", &letraB);
        printf("Letra C: ");
        scanf("%f", &letraC);
        
            delta = (letraB * letraB) - (4 * letraA * letraC);
            
            if(delta < 0){
                printf("Delta menor que zero - Não existe raízes"); 
            }else if(delta == 0){
                x1 = - letraB + sqrt(delta) / (2 * letraA);
                x2 = - letraB - sqrt(delta) / (2 * letraA);
                printf("Raiz única x1: %.1f ou x2: %.1f: ", x1, x2);
            }else if(delta >= 0){
                x1 = - letraB + sqrt(delta) / (2 * letraA);
                x2 = - letraB - sqrt(delta) / (2 * letraA);
                printf("Duas raízes x1: %.1f e x2: %.1f: ", x1, x2);
            }else if(letraA < 0){
               printf("Não é equação de segundo grau"); 
            }
        
    return 0;
}
