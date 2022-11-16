/*
Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e
a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”.
*/
#include <stdio.h>

int main()
{
    char nome[100];
    char sexo[8];
    int y, i;

    printf("\nDigite o nome: ");
    gets(nome);

    printf("\nDigite o sexo: ");
    gets(sexo);

    printf("\nDigite o idade: ");
    scanf("%d", &y);

    if (sexo[0] == 'F' || sexo[0] == 'f' && y < 25)
    {

        printf("ACEITA!");
    }
    else
    {

        printf("NAO ACEITA!");
    }

    return 0;
}
