#include<stdio.h>
void main() {
        int N , N2;
        scanf("%d",&N);
        scanf("%d",&N2);
        // int i=1;
        // int M;
        // while(M<=N2){
        //      M=N*i;
        //     if(M<=N2){
        //     printf("%d\n",M);
        //     }
        //     i++;
        // }

        // Problem 2
        int X=1;
        while(X<=N2){
            printf("%d\n",N*X);
            X++;
        }
}



