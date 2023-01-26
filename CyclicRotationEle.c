#include<stdio.h>
void main() {

    int N;
    printf("Enter the size of an arr: ");
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);

    }

    int temp = arr[0];
    arr[0] = arr[N-1];

    for(int i=N-2;i>=1;i--){
        arr[i+1]=arr[i];
    }

    arr[1]=temp;
    printf("The cyclic Rotation of Array is:  ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }

}