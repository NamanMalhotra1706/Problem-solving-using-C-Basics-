#include<stdio.h>

int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);

    int sum=0;
    // for(int i=0;i<=n;i++)
    while(n!=0){
     sum = sum + n%10;
    n=n/10;
    }
    printf("The sum Of Digits are: %d ",sum);


    
}