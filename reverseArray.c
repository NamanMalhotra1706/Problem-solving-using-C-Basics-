#include<stdio.h>
void main() {

    int N;
    printf("Enter the size of an Array: ");
    scanf("%d",&N);

    int Arr[N];

    for(int i=0;i<N;i++){
        scanf("%d",&Arr[i]);
    }
    // int N = sizeof(Arr)/sizeof(int);
    int temp;
    for(int i=0;i<N/2;i++){
        temp = Arr[i];
        Arr[i] =Arr[N-i-1];
        Arr[N-i-1]=temp;
    }

    for(int i=0;i<N;i++){
        printf("Arary at %d is  %d \n",i,Arr[i]);
    }
} 