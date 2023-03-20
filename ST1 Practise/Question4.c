// 6 Imagine you are a librarian tasked with sorting a large collection of books in ascending order by book
// number.To accomplish this, you decide to use a selection sort algorithm implemented through recursion.
// Starting with the first book, you compare it to each subsequent book and swap their positions if necessary,
// continuing this process until the entire collection is sorted. By using recursion, you are able to break down
// the sorting process into smaller, more manageable steps, which helps to simplify the overall task of
// organizing the library's book collection.

#include<stdio.h>
int selection_Sort(int arr[],int beginIndex , int size){
    if(beginIndex>size-1){
        return 0;
    }

    int MinIndex = beginIndex; // jaha sa begin krna waha sa pehle minimum element find krna

    // abb minimum index find krege jaab minimum elemnt milgya usme hum minIndex ma daldenga
    for(int i=beginIndex;i<size;i++){
        if(arr[i]<arr[MinIndex]){
            MinIndex=i;
        }
    }
    int temp = arr[MinIndex];
    arr[MinIndex]=arr[beginIndex];
    arr[beginIndex]=temp;

    selection_Sort(arr,beginIndex+1,size);

}


int main(){
    int list[30],size,temp;

    printf("Enter the Size: ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        scanf("%d",&list[i]);
    }

    selection_Sort(list,0,size);
    
    for(int i=0;i<size;i++){
        printf("%d ",list[i]);
    }
}