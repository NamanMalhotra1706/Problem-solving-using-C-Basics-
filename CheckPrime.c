#include<stdio.h>
void main() {

    int N;
    scanf("%d",&N);
    int flag=0;
    for(int i=2;i<=N/2;i++){
        if(N%i==0){
            flag=1;
            printf("Not Prime\n");
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==0){
        printf("Prime\n");
    }
}