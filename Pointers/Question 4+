#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e
troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por
exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A.*/

void invert(int *a, int *b)
{

    int vla;

    vla = *a;
    *a = *b;
    *b = vla;
}

int main()
{

    int *x, *p1;
    int *y, *p2;

    p1 = &x;
    p2 = &y;

    printf("Digite o vlor de x: ");
    scanf("%d", &x);

    printf("\nDigite o vlor de y: ");
    scanf("%d", &y);

    printf("\n\nAntes da funcao:");

    printf("\nX = %d", x);
    printf("\ny = %d", y);

    invert(p1, p2);

    printf("\n\nDepois da funcao:");

    printf("\nX = %d", *p1);
    printf("\ny = %d", *p2);

    return 0;
}