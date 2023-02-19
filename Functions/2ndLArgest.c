#include<stdio.h>
#include<limits.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int FirstLargest = INT_MIN;
    int SecondLargest =INT_MIN;

    for(int i=0;i<N;i++){
        FirstLargest = arr[i] > FirstLargest ? arr[i] : FirstLargest ;
        
        for(int i=0;i<N;i++){
            if(arr[i]>SecondLargest && arr[i]<FirstLargest){
                SecondLargest = arr[i];
            }
        }
    }
    printf("First Largest Is : %d " ,FirstLargest );
    // InCase Array has same Values
    if(SecondLargest == INT_MIN){
        printf("\n No Second Largest Sorry");
    }
    else
    printf("\n Second Largest Is : %d " ,SecondLargest );
}