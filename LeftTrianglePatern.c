#include<stdio.h>

int main(){

    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){
            printf(" ");
        }
         for(int j=0;j<i+1;j++){
        printf("*");
         }
        
        printf("\n");
    }
}