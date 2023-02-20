#include<stdio.h>
int main(){
    int Rows,Coloum;
    scanf("%d",&Rows);
    scanf("%d",&Coloum);
    int arr[Rows][Coloum];


    for(int i=0;i<Rows;i++){
        for(int j=0;j<Coloum;j++){
            printf("Enter value for arr[%d][%d]:", i, j);
            scanf("%d ",&arr[i][j]);
        }
    }
    // for(int i=0;i<Rows;i++){
    //     for(int j=0;j<Coloum;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //    printf("\n");
    // }

    // Printing in Reverse
     for(int i=Rows-1;i>=0;i--){
         for(int j=Coloum-1;j>=0;j--){
            printf("%d ",arr[i][j]);
        }
       printf("\n");
     }
     



}