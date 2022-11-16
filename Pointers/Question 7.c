
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
    int array[N], *pa, i;

    pa = array;

    for (i = 0; i < N; i++)
    {
        printf("\nDigite array[%d]: ", i);
        scanf("%d", pa + i);
    }

    for (i = 0; i < N; i++)
    {
        printf("\nArray[%d]: %d", i, *(pa + i) * 2);
    }

    return 0;
}