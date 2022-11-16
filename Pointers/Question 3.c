#include <stdio.h>

/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/

int main()
{
    int x;
    int y;
    int *p1 = &x;
    int *p2 = &y;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &y);

    printf("\nENDERECO P1 %p ", p1);
    printf("\nENDERECO P2 %p ", p2);

    if (p1 > p2)
    {

        printf("\nMAIOR p1");
    }
    else
    {

        printf("\nMAIOR p2");
    }

    return 0;
}