#include <stdio.h>
#define M 4
#define N 4
 
/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor*/
 
int main()
{
int num [M][N];
int i, l;
int maior = 0, linha = 0, coluna = 0;
 
//ler a matriz
 
for(i = 0; i < M; i++){
    for(l=0; l<N; l++){
 
    printf("Digite um numero [%d][%d]: ", i, l);
    scanf("%d",&num[i][l]);
 
    }
}
 
maior = num[0][0];
 
for(i = 0; i < M; i++){
    printf("\n");
    for(l=0; l<N; l++){
    printf("%d \t",num[i][l]);
 
    if(maior < num[i][l]){
 
        maior = num[i][l];
        linha = i;
        coluna = l;
 
        }
    }
}
            printf("\nO maior numero e: %d", maior);
        printf("\n se encontra na linha: %d", linha);
    printf("\n Se encontra na coluna: %d", coluna);
 
    return 0;
}