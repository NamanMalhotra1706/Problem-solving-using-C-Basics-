#include<stdio.h>

void main(){
        int Length;
        printf("Enter the Length of Pattern : ");
        scanf("%d",&Length);

        for(int i=0;i<Length;i++){
            for(int j=0;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }

        for(int i=1;i<=Length;i++){
            for(int j=1;j<=i;j++){-
                printf("%d",j);
            }
            printf("\n");
        }

}

