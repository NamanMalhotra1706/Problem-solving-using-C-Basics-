#include<stdio.h>
int main(){
    int n;
    printf("Enter the Size of an Array: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Element at %d : ",i);
        scanf("%d",&arr[i]);
    }
    int start=0;
    int end = n-1;
    int currentArea , maxArea = 0;

    while(start < end){
        int min = (arr[start] < arr[end]) ? arr[start] : arr[end];
        currentArea = min * (end-start);

        maxArea = (currentArea > maxArea) ? currentArea : maxArea;

        if(min == arr[start] )
        start++;
        else
        end--;
    }
    printf("The Maximum area is : %d",maxArea);
}