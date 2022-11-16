#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor,
o maior elemento e a posição que ele se encontra.
*/

int main()
{
    int i, num[4], count = 0, positions = 1;

    for (i = 0; i < 4; i++)
    {

        printf("\nDigite um numero[%d]: ", i);
        scanf("%d", &num[i]);

        if (count < num[i])
        {

            count = num[i];
            positions = i;
        }
    }

    printf("O maior numero e %d e a sua posicao e [%d]", count, positions);

    return 0;
}