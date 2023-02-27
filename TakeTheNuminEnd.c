#include<stdio.h>

        void MoveAtEnd(int* arr , int n , int indx , int x){

            if(indx==n-1){
                return;
            }
             if(arr[indx]==x){
                int tmp=arr[indx];
                arr[indx]=arr[indx+1];
                arr[indx+1]=tmp;
             }

             MoveAtEnd(arr,n,indx+1,x);
        }

        int main(){
            int n;
            scanf("%d",&n);
            
            int arr[n];
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }

            // int NumToMove = 2;
            int NumToMove;
            scanf("%d",&NumToMove);

            MoveAtEnd(arr,n,0,NumToMove);

            printf("After Moving it to end "); 
 
            for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
            }

        }