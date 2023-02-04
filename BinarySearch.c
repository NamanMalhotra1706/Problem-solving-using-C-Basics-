#include<stdio.h>
#include<limits.h>

int BinarySearch(int arr[],int n,int Number){
    int start = 0;
    int end = n ;
    
    while(start<=end){
        int mid  = (start+end)/2;

        if(arr[mid]<Number){
            start = mid + 1;
        }
        else if(arr[mid]>Number){
            end = mid-1;
        }
        else{
            return mid;
        }

    }
}
int main(){
    int n;
    printf("Enter the Size of an Array: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Element at %d : ",i);
        scanf("%d",&arr[i]);
    }
    int Search ;
    printf("Enter the Element you want to search : ");
    scanf("%d",&Search);
   printf("Element is Present at :: %d ",BinarySearch(arr,n,Search)); 

}