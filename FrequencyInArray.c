#include<stdio.h> 
void main() {
    int arr[] = {10,5,10,6,20,20,1};
    int size = sizeof(arr)/sizeof(int);
    int Frequency[size];
    for(int i=0;i<size;i++){
        Frequency[i]=-1;
    }
    
    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                Frequency[j]=0;
            }
        }

        if(Frequency[i]!=0){
                Frequency[i]=count;
            }
    }
    
    for(int i=0;i<size;i++){
        if(Frequency[i]!=0){
            printf("%d occurs %d times\n", arr[i], Frequency[i]);
        }
    }
    
}