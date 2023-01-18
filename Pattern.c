#include<stdio.h>
void main() {

 int n;
 printf("Enter the number of rows: ");
 scanf("%d",&n);

 for(int i=0;i<n;i++){
     for(int j=0;j<n-i;j++){
        printf(" ");
     }
     for(int star=0;star<n;star++){
        printf("*");
     }
     printf("\n");
 }
// Its Hollow Pattern
  printf("Hollow Pattern of it --> \n");
 for(int i=0;i<n;i++){
    int j;
     for(j=0;j<n-i-1;j++){
        printf(" ");
     }
     for(int star=0;star<n;star++){
        if(i==0||i==n||j==0||j==n||star==n-1||star==0)
        printf("*");
        else{
            printf(" ");
        }
     }
     printf("\n");
 }
}



