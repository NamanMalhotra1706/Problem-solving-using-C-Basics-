#include<stdio.h>

int FirstOcc(int* arr,int n,int idx , int key){
    if(idx == n)
    {
        return -1;
    } 
     if(arr[idx]==key){
        return  idx;
     }

     int ans = FirstOcc(arr,n,idx+1,key);
     return ans;

}

int main(){
     int n;
            scanf("%d",&n);
            
            int arr[n];
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            int key;
            printf("Enter the Key: ");
            scanf("%d",key);
           
          printf("First Occurence of %d is :  %d",key,FirstOcc(arr,n,0,key)) ;
}