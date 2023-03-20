//Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulous 109+7

#include<stdio.h>
int factorial(int n){
    if(n){
        return n*factorial(n-1);
    }
    return 1;
}
int main(){
    int n , r , nCr ;
    printf("Enter the Value of n : ");
    scanf("%d",&n);

    printf("Enter the Value of r: ");
    scanf("%d",&r);

    nCr = factorial(n)/(factorial(r)*factorial(n-r));

    printf("%d",nCr);
    
}