#include<stdio.h>
int main(){
    int Following , Follower;
    scanf("%d %d",&Following,&Follower);

    if(Following > 10*Follower){
        printf("Spam");
    }
    else{
        printf("Clean");
    }
}