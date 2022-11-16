#include <stdio.h>
#define M 3
#define N 3
 
/*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal
principal.*/
 
int main()
{
int num[M][N];
int i, l, soma;
 
// ler matriz
 
for(i = 0; i < M; i++){
    for(l=0; l<N; l++){
 
        printf("\nDigite um numero [%d][%d]: ", i, l);
        scanf("%d",&num[i][l]);
 
    }
}
// mostrar o valor
 
for(i = 0; i < M; i++){
printf("\n");
    for(l=0; l<N; l++){
 
        printf("%d\t",num[i][l]);
 
    }
}
 
//somar as diagonais
 
for(i = 0; i < M; i++){
printf("\n");
    for(l=0; l<N; l++){
 
        if (i == l){
 
        soma = num[i][l]+num[i][l]+num[i][l];
 
        }
    }
}
 
    printf("A soma foi: %d", soma);
    return 0;
}