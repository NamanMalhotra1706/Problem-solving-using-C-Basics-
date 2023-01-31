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
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0&&arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    printf("\n Sorted Array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int Target ;
    printf("\n Enter Targeted Position: ");
    scanf("%d",&Target);

    int start=0,end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==Target){
            printf("Element at %d and %d is giving the sum : %d",start,end,Target);
            break;
        }
        else if(arr[start]+arr[end]<Target){
            start++;
        }
        else{
            end--;
        }
    }
}