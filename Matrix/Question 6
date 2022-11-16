#include <stdio.h>
#define M 4
#define N 4
 
 
int main()
{
int num[M][N];
int i, l;
 
for(i = 0; i < M; i++){
    printf("\n");
    for(l=0; l<N; l++){
 
    if(i < l){
 
    num[i][l] = 2 * i + 7 * l;
 
    }else if(i == l){
 
    num[i][l] = 3 * (i * i) - 1;
 
    }else if(i > l){
 
    num[i][l] = 4 * (i * i * i) - 5 * (l * l) + 1;
 
        }
    }
}
 
for(i = 0; i < M; i++){
    printf("\n");
    for(l=0; l<N; l++){
 
    printf("%d\t", num[i][l]);
 
 }
}
 
 
    return 0;
}