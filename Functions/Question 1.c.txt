#include <stdio.h>
#include <stdlib.h>

/*Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.*/

int dobro(int n)
{
    int result;
    result = n * n;
    return result;
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\nO dobro e: %d", dobro(num));

    return 0;
}