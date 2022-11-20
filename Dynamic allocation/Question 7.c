#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 4
/*Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
○ Deverão ser armazenados, para cada aluno: matrı́cula, sobrenome (apenas um) e ano de
nascimento.
○ Ao inı́cio do programa, o usuário deverá informar o número de alunos que serão
armazenados
○ O programa deverá alocar dinamicamente a quantidade necessária de memória para
armazenar os registros dos alunos.
○ O programa deverá pedir ao usuário que entre com as informações dos alunos.
○ Ao final, mostrar os dados armazenados e liberar a memória alocada.*/

struct registro
{

    int matricula;
    char sobrenome[15];
    int nascimento;
};
typedef struct registro Registro;

int main()
{
    int tam, i;
    Registro *R;

    printf("Digite o a quantidade de registros que serao armazenados: ");
    scanf("%d", &tam);

    R = (Registro *)malloc(tam * sizeof(Registro));

    for (i = 0; i < tam; i++)
    {

        printf("\nDigite a matricula do aluno[%d]: ", i);
        scanf("%d", &R->matricula);

        fflush(stdin);

        printf("\nDigite o sobrenome do aluno: ");
        gets(R->sobrenome);

        fflush(stdin);

        printf("\nDigite o ano de nascimento do aluno[%d]: ", i);
        scanf("%d", &R->nascimento);
    }

    free(R);

    return 0;
}