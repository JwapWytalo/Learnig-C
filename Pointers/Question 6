#include <stdio.h>

/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de
cada posição desse array.
*/

int main()
{
    float x[10];
    int i;

    for (i = 0; i < 10; i++)
    {

        printf("\nDigite o valor[%d]: ", i);
        scanf("%f", &x[i]);
    }

    for (i = 0; i < 10; i++)
    {

        float *p1 = &x[i];

        printf("\nO endereco da variavel [%.1f pos [%d] e [%p]: ", x[i], i, p1);
    }

    return 0;
}