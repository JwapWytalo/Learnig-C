#include <stdio.h>
#define M 2
#define N 2
 
/*Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor
na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.*/
 
int main()
{
int num [M][N];
int i, l, x;
int linha = 0, coluna = 0, achou;
 
//ler a matriz
 
for(i = 0; i < M; i++){
    for(l=0; l<N; l++){
 
    printf("\nDigite um numero [%d][%d]: ", i, l);
    scanf("%d",&num[i][l]);
 
    }
}
 
    printf("\nDigite um numero para ser localizado: ");
    scanf("%d", &x);
 
for(i = 0; i < M; i++){
    for(l=0; l<N; l++){
 
    if(x == num[i][l]){
 
            achou = 1;
            linha = i;
            coluna = l;
 
        }
    }
}
 
    if(achou == 1){
 
    printf("\n\nO numero se encontra na linha %d e na coluna %d ", linha, coluna);
 
    }else{
 
        printf("\n\nNumero %d nao localzado", x);
 
    }
 
    return 0;
}