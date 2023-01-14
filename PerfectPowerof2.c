#include<stdio.h>
#include<math.h>

void main(){
    int N;
    scanf("%d",&N);

    while(N%2==0){
        N=N/2;
    }

    if(N==1){
        printf("Yes its 2s Power");
    }
    else{
        printf("Na Bhai ye nahi hai 2 ki power");
    }    
    
}