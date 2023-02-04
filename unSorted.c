#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the Size of an Array: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Element at %d : ",i);
        scanf("%d",&arr[i]);
    }

    int Largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i=1;i<n-1;i++){
        if(arr[i]<arr[i-1]){
                // Largest = max(Largest,arr[i]);
                Largest = arr[i]>Largest ? arr[i] : Largest;
                smallest = arr[i] < smallest ? arr[i] : smallest ;
        }
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                Largest = arr[i]>Largest ? arr[i] : Largest;
                smallest = arr[i] < smallest ? arr[i] : smallest ;  
        }
    }

    int i=0;
    while(arr[i]<smallest){
        i++;
    }

    printf("Starting Point : %d",i);

    int j=n-1;
    while(Largest<arr[j]){
        j--;
    }
    printf("\nEnding Point : %d",j);

}