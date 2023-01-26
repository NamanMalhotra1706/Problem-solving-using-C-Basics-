#include<stdio.h>
int main(){
    int arr[]={1,2,3,3,4,5};
    int arr1size = sizeof(arr)/sizeof(int);

    int arr2[]={3,3,5};
    int arr2size = sizeof(arr2)/sizeof(int);
    int i=0,j=0;
    while(i<arr1size || j<arr2size){
        if(arr[i]<arr2[j]){
            i++;
        }
        else if(arr[i]==arr2[j]){
                printf("%d ",arr[i]);
                i++;
                j++;
        }
        else{
            j++;
        }
    }
    }