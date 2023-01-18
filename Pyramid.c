#include <stdio.h>
int main() {
   int i, space, N, k , j;
   printf("Enter the rows: ");
   scanf("%d", &N);
  for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
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

    // Reverse Of it
     
     for(int i=0;i<N;i++){
        for(int j=0;j<=i-1;j++){
            printf(" ");
        }
        for(int k=0;k<N-i;k++){
            printf("*");
        }
        for(int d=0;d<N-i-1;d++){
            printf("*");
        }
        printf("\n");
     }
return 0;

}