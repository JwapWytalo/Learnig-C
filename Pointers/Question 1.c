#include <stdio.h>

/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e
char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os
ponteiros. Imprima os valores das variáveis antes e após a modificação.*/

int main()
{
    int x = 5;
    float y = 4.4;
    char z;

    printf("\nDigite o char: ");
    scanf("%c", &z);

    int *p1 = &x;
    float *p2 = &y;
    char *p3 = &z;

    printf("\nAntes da modificação int: %d", *p1);
    printf("\nAntes da modificação float: %.1f", *p2);
    printf("\nAntes da modificação char: %c", *p3);

    *p1 = 12;
    *p2 = 5.2;
    *p3 = '$';

    printf("\n\nDepois da alteracao int: %d", *p1);
    printf("\nDepois da alteracao float: %.1f", *p2);
    printf("\nDepois da alteracao int: %c", *p3);

    return 0;
}