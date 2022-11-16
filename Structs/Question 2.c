/*Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a
informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[30];
    int num;
    char curso[20];
};
typedef struct aluno Aluno;

int main()
{
    int i;
    int j;
    Aluno a[5];

    // receber
    for (i = 0; i < 5; i++)
    {

        printf("Nome do aluno [%d]: ", i);
        fgets(a[i].nome, 100, stdin);
        printf("Digite a matricula: ");
        scanf("%d", &a[i].num);
        __fpurge(stdin);
        printf("Digite o curso: ");
        fgets(a[i].curso, 100, stdin);

        printf("\n");
    }

    // imprimir
    for (i = 0; i < 5; i++)
    {
        printf("\nnome do aluno: %s", a[i].nome);
        printf("\nmatricula: %d", a[i].num);
        printf("\ncurso: %s", a[i].curso);

        printf("\n");
    }

    return 0;
}