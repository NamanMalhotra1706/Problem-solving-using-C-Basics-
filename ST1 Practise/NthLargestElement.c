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

    int Element ;
    printf("Enter the Element Position: ");
    scanf("%d",&Element);
    printf("%d th Smallest Elements is :: %d ",Element,arr[Element-1]);
    printf("%d th Largest Elements is :: %d ",Element,arr[n-Element]);


    return 0;
    }

    
