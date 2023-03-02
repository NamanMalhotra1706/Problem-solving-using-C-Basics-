#include<stdio.h>

void binarySearch(int* arr,int size,int s,int e,int key)
{
    int mid = (s+e)/2;

    if(arr[mid] == key)
    {
        printf("%d is found at index %d",key,mid);
        return;
    }

    else if(arr[mid]>key)
    e = mid - 1;

    else
    s = mid + 1;

    binarySearch(arr,size,s,e,key);
}
int main()
{
    int arr[] = {1,3,4,5,8,9,11,15,17,24,26,28,31,39};
    int size = sizeof(arr)/sizeof(int);

    int key = 31;

    binarySearch(arr,size,0,size-1,key);

    
}
