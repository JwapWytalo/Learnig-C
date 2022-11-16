#include <stdio.h>
#include <stdlib.h>
#define N 4

/*Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R. Essa
função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume)
A área da superfı́cie e o volume são dados, respectivamente, por:
A = 4 ∗ p ∗ R 2
V = 4/3 ∗ p ∗ R 3*/

void calc_esfera(float R, float *area, float *volume)
{

    float p = 3.14;
    float a;
    float v;

    *(area) = 4 * p * R * 2;
    *(volume) = 4 / 3 * p * R * 3;
}

int main()
{
    float R, A, V;

    printf("Digite o valor de R: ");
    scanf("%f", &R);

    calc_esfera(R, &A, &V);

    printf("\n Area e: %.2f", A);
    printf("\n O volume e: %.2f", V);

    return 0;
}