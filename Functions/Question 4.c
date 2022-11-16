#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é
um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro.
Ex: 1, 4, 9...
*/

int checkquadrado(int n)
{
    int m;

    m = sqrt(n);

    if (m * m == n)
    {

        return 1;
    }
    else
    {

        return 2;
    }
}

int main()
{
    int num;
    printf("Digite um numerro: ");
    scanf("%d", &num);

    printf("result %d", checkquadrado(num));

    return 0;
}