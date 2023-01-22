#include<stdio.h>
#include<limits.h> // INT_MIN and INT_MAX

void main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int Max = INT_MIN;
    int Min =INT_MAX;
    int count =0;
    for(int i=0;i<size;i++){
        count=count+arr[i];
        if(arr[i]>Max){
            Max=arr[i];
        }
        if(arr[i]<Min){
            Min=arr[i];
        }
    }

    printf("The Minimum Elemnts is : %d",Min);
    printf("\n");
    printf("The Maximum Elemnts is : %d",Max);
    printf("\n");
    printf("The Sum Elemnts is : %d",count);
    printf("\n");
}