// . Write a program in C to print first n natural numbers using recursion.

#include<stdio.h>

int naturalNum(int N1 , int last){

if(N1<=last){
    printf("%d ",N1);
    naturalNum(N1+1,last);
}

}

int main(){
    int N1=1;
    int last;
    printf("Enter the Last Number : ");
    scanf("%d",&last);

    naturalNum(N1,last);
}