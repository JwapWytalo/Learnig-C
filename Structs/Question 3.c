#include <stdio.h>
#include <stdlib.h>

struct alunos
{
    char matricula[10];
    char nome[50];
    float nota[3];
};

int main()
{

    struct alunos a[5];
    int i, maiornota1_indice, maiormediageral_indice, menormediageral_indice;
    float maiornota1 = 0, mediageral[5], maiormediageral = 0, menormediageral;

    printf("\nCADASTRO\n\n");
    // Entrada de 5 usuarios.
    for (i = 0; i < 5; i++)
    {

        printf("\n\nDigite a matricula do %do Aluno: ", i + 1);
        scanf("%s", &a[i].matricula);
        printf("Nome do %d Aluno: ", i + 1);
        scanf("%s", &a[i].nome);
        printf("Nota 1: ");
        scanf("%f", &a[i].nota[0]);
        printf("Nota 2: ");
        scanf("%f", &a[i].nota[1]);
        printf("Nota 3: ");
        scanf("%f", &a[i].nota[2]);

        mediageral[i] = a[i].nota[0] + a[i].nota[1] + a[i].nota[2];

        if (maiornota1 < a[i].nota[0])
        {

            maiornota1 = a[i].nota[0];

            maiornota1_indice = i;
        }
        if (mediageral[i] > maiormediageral)
        {
            maiormediageral = mediageral[i];
            maiormediageral_indice = i;
        }
        if (mediageral[i] < menormediageral)
        {
            menormediageral = mediageral[i];
            menormediageral_indice = i;
        }
    };

    printf("\nAluno com maior Nota 1: %s", a[maiornota1_indice].nome);
    printf("\nAluno com maior media: %s", a[maiormediageral_indice].nome);
    printf("\nAluno com menor media: %s", a[menormediageral_indice].nome);

    int j = 0;
    for (j = 0; j < 5; j++)
    {

        if (mediageral[j] <= 6)
        {

            printf("\nAluno %s REPROVADO\n", a[j].nome);
        }
        else
        {
            printf("Aluno %s APROVADO\n", a[j].nome);
        }
    }

    system("pause");
    return 0;
}
