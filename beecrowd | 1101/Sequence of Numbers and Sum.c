#include<stdio.h>
int main()
{
    int n, M, N, i, sum = 0, aux;

    while(1){

        scanf("%d%d", &M,&N);

        if(M<=0 || N<=0) break;

        if(M>N){

            aux = M;

            M = N;

            N = aux;
        }

        sum = 0;

    for(i=M; i<=N; i++){

        printf("%d ", i);

        sum += i;
    }

    printf("sum=%d\n", sum);
}
    return 0;
}
