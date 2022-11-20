/*Faça um programa que receba do usuário o tamanho de uma string e chame uma função para
alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string.
O programa imprime a string sem suas vogais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    char *str;

    printf("\nDigite o tamanho da string: ");
    scanf("%d", &n);

    str = (char *)malloc(n * sizeof(char));

    fflush(stdin);

    printf("\nDigite o conteudo da string: ");
    gets(str);

    for (i = 0; *(str + i) != '\0'; i++)
    {

        if (*(str + i) != 'a' &&
            *(str + i) != 'e' &&
            *(str + i) != 'i' &&
            *(str + i) != 'o' &&
            *(str + i) != 'u')
        {

            printf("%c", *(str + i));
        }
    }

    free(str);

    return 0;
}