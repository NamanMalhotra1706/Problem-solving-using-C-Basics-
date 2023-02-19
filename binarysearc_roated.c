#include<stdio.h>
int main(){
    int arr[]={4,5,1,2,3};
    int n=5;
    int target=5;
    int s=0, e=n-1;
    int mid;

    while(s<=e){
        mid=(s+e)/2;
        if(target==arr[mid]){
            printf("element found at %d index",mid);
            break;
        }
        else if(arr[s]<=arr[mid]){
            if(target>=arr[s] && target<arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else if(arr[mid]<=arr[e]){
            if(target>=arr[mid] && target<arr[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
}