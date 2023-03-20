#include<stdio.h>

int SumNum(int n){
    int SumTilln =0;
    while(n!=0){
        SumTilln = SumTilln + n;
        n=n-1;
    }
    return SumTilln;
}
int main(){
    int n;
    printf("Enter the Length : ");
    scanf("%d",&n);
    int arr[n];

    int sum=0;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    // printf("%d",sum);


    // printf("%d",SumNum(n)-sum);

    int ans = n*(n+1)/2 - sum;

    printf("%d",ans);



    
}