#include <stdio.h>
#include <stdlib.h>

/*Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.
*/

float checknumber(float N)
{

    if (N > 0)
    {

        return 1;
    }
    else if (N < 0)
    {

        return -1;
    }
    else if (N == 0)
    {

        return 0;
    }
}

int main()
{

    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("resultado: %.0f", checknumber(num));

    return 0;
}