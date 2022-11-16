#include <stdio.h>

/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o
maior endereço.*/

int main()
{
    int x = 8;
    int *p1 = &x;
    int y = 6;
    int *p2 = &y;

    printf("\nEndereco p1: %p", p1);
    printf("\nEndereco p2: %p", p2);

    if (p1 > p2)
    {

        printf("\nO endereco maior e p1");
    }
    else
    {

        printf("\nO endereco maior e p2");
    }

    return 0;
}