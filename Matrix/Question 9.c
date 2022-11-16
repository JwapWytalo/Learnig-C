#include <stdio.h>
#define M 4
#define N 4
 
/*Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz
gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da
diagonal principal. Imprima a matriz original e a matriz transformada.*/
 
int main()
{
int num[M][N];
int i, l, valores = 0;
 
// ler matriz
for(i = 0; i < M; i++){
    for(l=0; l<N; l++){
 
    valores = valores + 1;
 
     num[i][l] = valores;
 
    }
}
 
// mostrar a transposta
 
for(i = 0; i < M; i++){
printf("\n");
    for(l=0; l<N; l++){
 
    num[0][1] = 0;
    num[1][2] = 0;
    num[2][3] = 0;
 
        printf("%d\t",num[i][l]);
 
    }
}
 
    return 0;
}