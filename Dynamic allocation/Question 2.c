#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p, i;

    printf("Digite o tamanho de um vetor: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
    {

        printf("\nMemoria insuficiente");
        exit(1);
    }
    else
    {

        for (i = 0; i < n; i++)
        {

            printf("\nDigite o valor [%d]: ", i);
            scanf("%d", p + i);
        }

        for (i = 0; i < n; i++)
        {

            printf("\nvalor[%d]: %d ", i, *(p + i));
        }
    }

    free(p);
    return 0;
}