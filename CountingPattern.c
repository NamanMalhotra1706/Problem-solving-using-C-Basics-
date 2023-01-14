#include<stdio.h>
 void main(){
    int n;
    printf("Enter kria Number:  ");
    scanf("%d",&n);
    int count =1;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<i+1;j++){
            printf("%d ",&count);
            count++;
        }
        printf("\n");
    }
 }