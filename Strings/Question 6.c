/*
Crie um programa que compara duas strings (não use a função strcmp)
*/
#include <stdio.h>

int main()
{
    char str1[20];
    char str2[20];
    int i, x;

    printf("\nDigite alguma palavra: ");
    gets(str1);

    printf("\nDigite outra palavra: ");
    gets(str2);

    for (i = 0; str1[i] != 0; i++)
    {

        if (str1[i] == str2[i])
        {

            x = 1;
        }
        else
        {

            x = 2;
        }
    }
    if (x == 1)
    {

        printf("Strings iguais");
    }
    else if (x == 2)
    {

        printf("Strings diferentes");
    }

    return 0;
}