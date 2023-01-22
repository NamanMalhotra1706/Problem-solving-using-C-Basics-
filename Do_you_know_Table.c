#include<stdio.h>
void main() {
        int N , N2;
        scanf("%d",&N);
        scanf("%d",&N2);
        int i=1;
        int M=0;
        while(M<=N2){
             M=N*i;
            if(M<=N2){ 
            printf("%d\n",M);
            }
            i++;
        }


        // Problem 2
        // 2*4 --> N1=2,N2=4 --> Output-> 2 4 6 8
        // int X=1;
        // while(X<=N2){
        //     printf("%d\n",N*X);
        //     X++;
        // }
}



