#include <stdio.h>
#include <stdlib.h>
#define N 4

/*Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável
A e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C
e D. O ponteiro B deve ser usado para calcular o dobro, C o triplo e D o quádruplo.
*/

int main()
{

    int a;

    printf("Digite o valor: ");
    scanf("%d", &a);

    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("\nO dobro do valor e: %d", *b * 2);
    printf("\nO triplo do valor e: %d", **c * 3);
    printf("\nO quadruplo do valor e: %d", ***d * 4);

    return 0;
}