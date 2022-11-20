#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas
pelo usuário e a leia. Em seguida, implemente uma função que receba um valor, retorne 1 caso o
valor esteja na matriz ou retorne 0 caso não esteja na matriz.*/

#define N 10

int valor(int **matriz, int v, int lin, int col)
{

    int i, j, count = 0;

    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {

            if (matriz[i][j] == v)
            {

                count = 1;
            }
        }
    }

    return count;
}

int main()
{
    int **matriz, i, j, col, lin, x;

    printf("\nDigite a linha da matriz: ");
    scanf("%d", &lin);

    printf("\nDigite a coluna da matriz: ");
    scanf("%d", &col);

    matriz = (int **)malloc(lin * sizeof(int *));
    for (i = 0; i < lin; i++)
    {
        matriz[i] = (int *)malloc(col * sizeof(int));
        for (j = 0; j < col; j++)
        {

            printf("\nDigite os valores [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < lin; i++)
    {
        printf("\n");
        for (j = 0; j < col; j++)
        {

            printf("\t%d ", matriz[i][j]);
        }
    }

    printf("\n\nDigite um valor: ");
    scanf("%d", &x);

    printf("\n\n valor = %d ", valor(matriz, x, lin, col));

    return 0;
}