#include<stdio.h>
#include<stdlib.h>
// void addNum(int a, int b){
//     printf("Sum is : %d",a+b);
// }

// void Swap(int* a , int* b){

//     printf("\nThe value of A is %d and B is %d",*a,*b);
//     // int temp = a;
//     // a = b;
//     // b = temp;
    
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("\nThe value of A is %d and B is %d",*a,*b);
// }


int main(){
    // int a=10,b=5;
    // addNum(a,b);
    // Swap(&a,&b);

    // int arr[5]={1,2,3,4,5};

    // Triversing in Array using Pointer
    // int *ptr = arr;
    // for(int i=0;i<(sizeof(arr)/sizeof(int)) ; i++){
    //     printf("array at % d and value is : %d  \n ",i,*ptr);
    //     ptr = ptr+1; //
    // }


    //malloc
    int n=5;
    int * arr = (int*)malloc(n*(sizeof(int)));
    for(int i=0;i<n;i++){
        arr[i] = i+1;
    }

    printf("array is : \n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}