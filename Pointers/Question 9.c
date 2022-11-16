#include <stdio.h>
#include <stdlib.h>

/*Crie uma função que receba três parâmetros: um array, a quantidade de elementos e um valor do
mesmo tipo do array. A função deverá preencher os elementos do array com esse valor. Não
utilize índices para percorrer o array, apenas aritmética de ponteiros.
*/

int preenche(int *array, int N, int valor)
{

    int i;

    for (i = 0; i < N; i++)
    {

        *(array + i) = valor;

        return *(array + i);
    }
}

int main()
{

    int x, y, *p, i;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &x);

    printf("Digite o vlor de y: ");
    scanf("%d", &y);

    for (i = 0; i < x; i++)
    {

        printf("\n%d", preenche(*p, x, y));
    }

    return 0;
}