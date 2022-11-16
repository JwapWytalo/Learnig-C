#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct cidade{

    char nome[40];
    int X;
    int Y;

};

typedef struct cidade Cidades;

int main() {
    int N, i, j, num1=0, num2=0, xl, yl;
    Cidades *cid;
    int **dist;

    printf("Digite a quantidade de cidades: ");
    scanf("%d", &N);

    cid = (Cidades *) malloc(N*sizeof(Cidades));

    dist = (int **) malloc(N*sizeof(int *));
    for (i=0; i<N; i++) {
        dist[i] = (int *) malloc(N*sizeof(int));
    }


    for(i = 0; i < N; i++) {
        printf("\nDigite o nome da cidade [%d]: ", i);
        scanf("%s", cid[i].nome);

        printf("\nDigite a coordenada X da cidade [%d]: ", i);
        scanf("%d", &cid[i].X);

        printf("\nDigite a coordenada Y da cidade [%d]: ", i);
        scanf("%d", &cid[i].Y);
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            xl = cid[i].X - cid[j].X;
            yl = cid[i].Y - cid[j].Y;
            dist[i][j] = sqrt(pow(xl, 2) + pow(yl, 2));
        }
    }

    for(i = 0; i < N; i++) {
            printf("\n");
        for(j = 0; j < N; j++) {
            printf("%d\t", dist[i][j]);
        }

        printf("\n");
    }
    while(num1 != -1 && num2 != -1) {

        printf("\nDigite o numero de uma cidade: ");
        scanf("%d", &num1);

        printf("\nDigite o numero de outra cidade: ");
        scanf("%d", &num2);

        if(num1 >= 0 && num2 >= 0) {
            printf("A distancia entre as cidades eh %d\n", dist[num1][num2]);
        }
    }

    for (i=0; i<N; i++) {

        free(dist[i]);

    }

    free(dist);
    free(cid);




    return 0;
}
