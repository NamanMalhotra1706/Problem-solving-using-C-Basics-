#include<stdio.h>

int SumOfarr(int* arr,int n,int idx){
    if(idx == n)
    {
        return 0;
    } 
    int sum = arr[idx] + SumOfarr(arr,n,idx+1);
    return sum;
}

int main(){
     int n;
            scanf("%d",&n);
            
            int arr[n];
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            printf("%d ", SumOfarr(arr, n, 0));
}