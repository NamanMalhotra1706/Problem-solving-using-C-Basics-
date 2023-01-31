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

    int s=0,e=n-1,maxArea=0;

    while (s<e)
    {
        int height =arr[s]>arr[e]?arr[s]:arr[e];
        int width = e-s;

        int currentArea= height * width;
        maxArea =  currentArea > maxArea? currentArea : maxArea;

        if(arr[s]<arr[e]){
            s++;
        }
        else if(arr[s]>arr[e]){
            e--;
        }
        else{
            s++;
            e--;
        }
    }
    printf("maxArea : %d",maxArea);


}