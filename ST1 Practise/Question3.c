//  Imagine you're a mathematician studying the properties of numbers. You come across a unique number
// n and its reverse r, such that when the number is raised to the power of its reverse, a fascinating result
// occurs. You have given a number and its reverse. You have to determine what the result of this calculation
// would be?
// As answers can be very large, print the result modulo 10^9 + 7.


#include<stdio.h>
# define mod 1000000007

long long power(int N,int R)
{
        if(R==0) return 1;
        long long temp = power(N,R/2);
        temp=(temp*temp)%mod;
        if(R%2==1)
        {
        return (temp*N)%mod;
        }
        return temp;
}

long long reverse(int n){
    long long rev=0,rem=0;
    while(n!=0){
        rem = n%10; // give last digit
        rev = rev*10 + rem ;// jo bhi ayya usko rev ko 10 sa multiply kreke add krdia rem sath
        n = n/10;
    }
    return rev;
}

int main(){
    long long n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int Rev = reverse(n);
    printf("REverse of The number is : %d\n",Rev);
    
    long long ans = power(n,Rev);

    printf("%ld",ans);
}