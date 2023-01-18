#include<stdio.h>
void main() {
    int n;
    printf("Enter The Number of Lines:  ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("*");
        }
        for(int d=0;d<n-i;d++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        for(int d=0;d<i;d++){
            printf("*");
        }
        printf("\n");
    }

}