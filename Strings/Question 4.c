/*
Digite um nome, calcule e retorne quantas letras tem esse nome
*/
#include <stdio.h>

int main()
{
    char str[100];
    int i, letras = 0;

    printf("Digite um nome: ");
    gets(str);

    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] != ' ' && str[i] != '_')

            letras++;
    }

    printf("%d", letras);

    return 0;
}