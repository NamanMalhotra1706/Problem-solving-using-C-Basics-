#include<stdio.h>
void main() {

    int N;
    printf("Enter the size of an arr: ");
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);

    }

    int MaxSoFar=0;
    for(int i=0;i<N;i++){
        int Profit;
        for (int j= 0; j<i; j++)
        {
            Profit=arr[i]-arr[j];
            MaxSoFar=(Profit>MaxSoFar)?Profit:MaxSoFar;
        }
        
    }

    
    printf("\n MaxProfit You can make is : %d",MaxSoFar);
}