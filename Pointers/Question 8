#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80

/*Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string
ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.
*/

int ocorre(char *str1, char *str2)
{

    int i, count = 0;

    for (i = 0; i < strlen(str1); i++)
    {

        if (*(str1 + i) == *(str2 + count))
        {

            count++;
        }
        else
        {

            count == 0;
        }
    }

    if (count == strlen(str2))
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

int main()
{

    char str1[N];
    char str2[N];
    int oc;

    printf("\nDigite a string 1: ");
    gets(str1);

    printf("\nDigite a string 2: ");
    gets(str2);

    oc = ocorre(str1, str2);

    if (oc == 1)
    {

        printf("\n\nA string 2 ocorre na string 1");
    }
    else
    {

        printf("\n\nA string 2 NAO ocorre na string 1");
    }

    return 0;
}
