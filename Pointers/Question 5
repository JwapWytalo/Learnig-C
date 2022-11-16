#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores
de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável.
Escreva o conteúdo das 2 variáveis na tela.
*/

int valor(int *p1, int *p2)
{
    int tam;

    if (*p1 < *p2)
    {

        tam = *p1;
        *p1 = *p2;
        *p2 = tam;
    }
}

int main()
{
    int *a, *b;

    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &a);

    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &b);

    printf("\n\nvalor da primeira variavel antes %d", a);
    printf("\nvalor da segunda variavel antes %d", b);

    valor(&a, &b);

    printf("\n\nvalor da primeira variavel depois %d", a);
    printf("\nvalor da segunda variavel depois %d", b);

    return 0;
}