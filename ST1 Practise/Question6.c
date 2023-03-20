//  You are a programmer who has been tasked with writing a C program to find the nth Fibonacci number
// using recursion. Your boss wants the program to be able to handle large values of n without crashing or
// slowing down too much. How would you approach this task?

#include<stdio.h>
int Fibonacci(int num){
    if(num==0 || num==1){
        return num;
    }
    else{
        return Fibonacci(num-1)+Fibonacci(num-2);
    }
}
int main(){
    int n,c;
    printf("Enter the Number : ");
    scanf("%d",&n);

    // To print nth fibonacii element
    // printf("%d\n",Fibonacci(n));

    // To print fibonacci till n 

    for(c=0;c<n;c++){
        printf("%d ",Fibonacci(c));
    }
    
}